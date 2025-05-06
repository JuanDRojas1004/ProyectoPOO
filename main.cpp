#include <iostream>
#include <vector>
#include <random>
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


void imprimirMapa(const vector<vector<Nodo*>>& mapa) {
    int size = mapa.size();
    cout << "\nMapa de Nodos (Tipo | Cantidad de Criaturas):\n\n";

    // Encabezado de columnas
    cout << "     ";
    for (int col = 0; col < size; ++col) {
        cout << "[" << col << "]     ";
    }
    cout << endl;

    string linea = "   +" + string(size, '-').replace(0, 1, "--------+");

    for (int i = 0; i < size; ++i) {
        cout << "   +";
        for (int j = 0; j < size; ++j) cout << "--------+";
        cout << "\n[" << i << "]|";

        for (int j = 0; j < size; ++j) {
            Nodo* nodo = mapa[i][j];
            string tipo = nodo->getTipo();
            char simbolo = 'N'; // Por defecto
            if (tipo == "Venenoso") simbolo = 'V';
            else if (tipo == "JovenPorSiempre") simbolo = 'J';
            else if (tipo == "Curativo") simbolo = 'C';

            cout << "  " << simbolo << "(" << nodo->cantidadCriaturas() << ")  |";
        }
        cout << endl;
    }
    cout << "   +";
    for (int j = 0; j < size; ++j) cout << "--------+";
    cout << "\n\n N = Normal, V = Venenoso, R = Rejuvenecedor, C = Curativo, P = Reproductivo\n";
}



