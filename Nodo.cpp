//
// Created by juand on 30/04/2025.
//

#include "Nodo.h"

Nodo::Nodo(const string &tipo, const int &x, const int &y): tipo (tipo), posicion(make_pair(x, y)) {}

string Nodo::getTipo() {return tipo;}

pair<int, int> Nodo::getPosicion() {return posicion;}

void Nodo::mostrarCriaturas() const {

    for (const auto& cri : criaturas) {
        cout << "Criatura: " << cri -> getNombre() << "  de edad: " << cri -> getEdad()
                << "  con vida: " << cri -> getVida() << endl;
    }

}

void Nodo::agregarCriaturas(Criaturas *cri) {
    criaturas.push_back(cri);
}

int Nodo::cantidadCriaturas() const { return criaturas.size();}

Nodo::~Nodo() = default;
