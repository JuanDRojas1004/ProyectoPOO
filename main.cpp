#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include <random>
#include <limits>
#include "Centellas.h"
#include "Metamorfitas.h"
#include "LentosdeRaiz.h"
#include "NodoNormal.h"
#include "NodoRegenerativo.h"
#include "NodoVenenoso.h"
#include "NodoJovenPorSiempre.h"
#include "Criaturas.h"
#include "Nodo.h"
using namespace std;

// Variables globales
int tamañoMapa;
vector<vector<shared_ptr<Nodo>>> mapa;
vector<shared_ptr<Criaturas>> criaturas;

random_device rd;
mt19937 gen(rd());

// Funciones auxiliares
int pedirNumero(const string& mensaje) {
    int num;
    cout << mensaje;
    while (!(cin >> num) || num <= 0) {
        cout << "Por favor ingrese un número válido mayor que 0: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return num;
}

pair<int, int> posicionAleatoria() {
    uniform_int_distribution<> dis(0, tamañoMapa - 1);
    return {dis(gen), dis(gen)};
}

void crearMapa() {
    tamañoMapa = pedirNumero("Ingrese el tamaño del mapa (ej. 5 para 5x5): ");
    mapa.clear();
    for (int i = 0; i < tamañoMapa; ++i) {
        vector<shared_ptr<Nodo>> fila;
        for (int j = 0; j < tamañoMapa; ++j) {

            uniform_int_distribution<> tipoNodo(0, 3); // 4 tipos posibles

            int tipo = tipoNodo(gen);
            if (tipo == 0)
                fila.push_back(make_shared<NodoNormal>(i, j));
            else if (tipo == 1)
                fila.push_back(make_shared<NodoVenenoso>(i, j));
            else if (tipo == 2)
                fila.push_back(make_shared<NodoRegenerativo>(i, j));
            else if (tipo == 3)
                fila.push_back(make_shared<NodoJovenPorSiempre>(i, j));



        }
        mapa.push_back(fila);
    }
    cout << "Mapa " << tamañoMapa << "x" << tamañoMapa << " creado exitosamente.\n";
}

void crearCriatura() {
    if (mapa.empty()) {
        cout << "Debe crear primero un mapa.\n";
        return;
    }

    cout << "\nElige el tipo de criatura a crear:\n";
    cout << "1. Centella - Rápida, eléctrica y chispeante.\n";
    cout << "2. Lento de Raíz - Fuerte y resistente, pero lento.\n";
    cout << "3. Metamorifta - Inestable, adaptable, siempre cambiando.\n";
    cout << "Opción: ";

    int opcion;
    cin >> opcion;

    string nombre;
    cout << "Nombre de la criatura: ";
    cin >> nombre;

    pair<int, int> pos = posicionAleatoria();
    shared_ptr<Criaturas> criatura;

    if (opcion == 1)
        criatura = make_shared<Centellas>(nombre, 50, 0, pos.first, pos.second);
    else if (opcion == 2)
        criatura = make_shared<LentosdeRaiz>(nombre, 50, 0, pos.first, pos.second);
    else if (opcion == 3)
        criatura = make_shared<Metamorfitas>(nombre, 50, 0, pos.first, pos.second);
    else {
        cout << "Opción inválida.\n";
        return;
    }

    criaturas.push_back(criatura);
    mapa[pos.first][pos.second]->agregarCriaturas(criatura.get());

    cout << "\nCriatura " << nombre << " del tipo " << criatura->getTipo()
         << " creada en posicion (" << pos.first << ", " << pos.second << ")\n";
}

void imprimirMapa() {
    int size = mapa.size();
    cout << "\n Mapa de Nodos (Tipo | Cantidad de Criaturas):\n\n    ";
    for (int j = 0; j < size; j++) cout << "   [" << j << "]   ";
    cout << "\n";

    for (int i = 0; i < size; i++) {
        cout << "   +";
        for (int j = 0; j < size; j++) cout << "--------+";
        cout << "\n[" << i << "]|";
        for (int j = 0; j < size; j++) {
            string tipo = mapa[i][j]->getTipo().substr(0,1);
            int cant = mapa[i][j]->cantidadCriaturas();
            cout << "  " << tipo << "(" << cant << ")  |";
        }
        cout << "\n   +";
        for (int j = 0; j < size; j++) cout << "--------+";
        cout << "\n";
    }

    cout << "\nLeyenda: N = Normal, V = Venenoso, R = Rejuvenecedor, C = Curativo, J = Joven por siempre\n";
}

void mostrarCriaturasPorNodo() {
    for (int i = 0; i < tamañoMapa; ++i) {
        for (int j = 0; j < tamañoMapa; ++j) {
            cout << "\nNodo (" << i << ", " << j << ") contiene " << mapa[i][j]->cantidadCriaturas() << " criatura(s):\n";
            mapa[i][j]->mostrarCriaturas();
        }
    }
}

void avanzarCiclo() {
    cout << "\nAvanzando ciclo del mundo...\n";

    for (auto& criatura : criaturas) {
        if (!criatura->estaVivaFunc()) continue;

        criatura->setEdad(1);  // Aumentar la edad

        string tipo = criatura->getTipo();
        int eleccion = -1;

        // Distribuciones personalizadas según el tipo
        if (tipo == "Centella") {
            // Mayor probabilidad de moverse (1)
            uniform_int_distribution<> dist(0, 5); // 0,1: nada, 2-4: mover, 5: reproducir
            int r = dist(gen);
            if (r <= 1) eleccion = 0;
            else if (r <= 4) eleccion = 1;
            else eleccion = 2;
        }
        else if (tipo == "LentosdeRaiz") {
            // Mayor probabilidad de reproducirse (2)
            uniform_int_distribution<> dist(0, 4); // 0: nada, 1: mover, 2-3: reproducir, 4: morir
            int r = dist(gen);
            if (r == 0) eleccion = 0;
            else if (r == 1) eleccion = 1;
            else if (r <= 3) eleccion = 2;
            else eleccion = 3;
        }
        else {
            // Metamorfitas o cualquier otro → comportamiento base
            uniform_int_distribution<> dist(0, 3); // equitativo
            eleccion = dist(gen);
        }

        // Ejecutar acción
        if (eleccion == 0) {
            cout << criatura->getNombre() << " no hace nada.\n";
        } else if (eleccion == 1) {
            pair<int, int> posAnterior = criatura->getPosicion();
            criatura->mover(tamañoMapa);
            pair<int, int> posNueva = criatura->getPosicion();
            mapa[posAnterior.first][posAnterior.second]->eliminarCriatura(criatura.get());
            mapa[posNueva.first][posNueva.second]->agregarCriaturas(criatura.get());

            cout << criatura->getNombre() << " se desplazó de (" << posAnterior.first << ", " << posAnterior.second
                 << ") a (" << posNueva.first << ", " << posNueva.second << ").\n";
        } else if (eleccion == 2) {
            criatura->reproducirse(criaturas, mapa);
        } else if (eleccion == 3) {
            criatura->morir();
        }
    }
}

void guardarYSalir() {
    cout << "\nHasta la próxima!\n";
}

int main() {
    int opcion = -1;
    do {
        cout << "\n=== MENÚ DEL MUNDO DE CRIATURAS ===\n";
        cout << "1. Crear mapa\n";
        cout << "2. Crear criatura\n";
        cout << "3. Avanzar un ciclo\n";
        cout << "4. Imprimir mapa\n";
        cout << "5. Mostrar criaturas por nodo\n";
        cout << "6. Salir\n";
        cout << "Opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: crearMapa(); break;
            case 2: crearCriatura(); break;
            case 3: avanzarCiclo(); break;
            case 4: imprimirMapa(); break;
            case 5: mostrarCriaturasPorNodo(); break;
            case 6: guardarYSalir(); break;
            default: cout << "Opción inválida.\n";
        }

    } while (opcion != 6);

    return 0;
}






