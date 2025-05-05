//
// Created by juand on 30/04/2025.
//

#ifndef NODO_H
#define NODO_H
#include <string>
#include <iostream>
#include <utility>
#include <vector>
#include "Criaturas.h"
using namespace std;




class Nodo {

private:
    pair <int, int> posicion;
    string tipo;
    vector<Criaturas*> criaturas;

public:
    Nodo(const string& tipo, const int& x, const int& y ) : tipo (tipo), posicion(make_pair(x, y)) {}

    string getTipo(){return tipo;}

    pair<int, int> getPosicion() {return posicion;}

    void mostrarCriaturas() const{

        for (const auto& cri : criaturas) {
            cout << "Criatura: " << cri -> getNombre() << "  de edad: " << cri -> getEdad()
            << "  con vida: " << cri -> getVida() << endl;
        }

    }

    void agregarCriaturas(Criaturas *cri) {
        criaturas.push_back(cri);
    }

    virtual void efectoEspecial(Criaturas *cri) = 0;

    int cantidadCriaturas() const{ return criaturas.size();}

    virtual ~Nodo() = default;


};



#endif //NODO_H
