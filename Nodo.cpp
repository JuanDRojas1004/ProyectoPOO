    //
    // Created by juand on 30/04/2025.
    //

    #include "Nodo.h"
    #include "Criaturas.h"
    #include <algorithm>

// Constructor de la clase Nodo.
// Inicializa el tipo de nodo y su posición (x, y).
Nodo::Nodo(const string &tipo, const int &x, const int &y)
: tipo(tipo), posicion(make_pair(x, y)) {}

// Metodo que devuelve el tipo de nodo (por ejemplo, venenoso, rejuvenecedor, etc.).
string Nodo::getTipo() {
    return tipo;
}

// Metodo que devuelve la posición del nodo como un par de enteros (x, y).
pair<int, int> Nodo::getPosicion() {
    return posicion;
}

// Metodo que muestra en consola todas las criaturas presentes en el nodo.
// Se asume que cada criatura tiene métodos getNombre(), getEdad() y getVida().
void Nodo::mostrarCriaturas() const {
    for (const auto& cri : criaturas) {
        cout << "Criatura: " << cri->getNombre()
             << "  de edad: " << cri->getEdad()
             << "  con vida: " << cri->getVida() << endl;
    }
}

// Metodo que agrega un puntero a una criatura al vector de criaturas del nodo.
void Nodo::agregarCriaturas(Criaturas *cri) {
    criaturas.push_back(cri);
}

// Metodo que devuelve la cantidad de criaturas presentes en el nodo.
int Nodo::cantidadCriaturas() const {
    return criaturas.size();
}

// Metodo que elimina una criatura específica del vector de criaturas.
// Utiliza std::remove para mover el puntero al final y luego lo elimina con erase.
void Nodo::eliminarCriatura(Criaturas* cri) {
    criaturas.erase(remove(criaturas.begin(), criaturas.end(), cri), criaturas.end());
}

// Destructor de la clase Nodo. Se define como predeterminado porque
// no se necesita una limpieza especial (por ejemplo, no se destruyen criaturas aquí).
Nodo::~Nodo() = default;
