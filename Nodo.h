//
// Created by juand on 30/04/2025.
//

#ifndef NODO_H
#define NODO_H

#include <string>
#include <iostream>
#include <utility>
#include <vector>

class Criaturas;
using namespace std;




class Nodo {

private:
    pair <int, int> posicion;
    string tipo;

protected:
    vector<Criaturas*> criaturas;

public:
    Nodo(const string& tipo, const int& x, const int& y );

    string getTipo();

    pair<int, int> getPosicion();

    void mostrarCriaturas() const;

    void agregarCriaturas(Criaturas *cri);

    virtual void efectoEspecial(Criaturas *cri) = 0;

    int cantidadCriaturas() const;

    void eliminarCriatura(Criaturas* cri);

    virtual ~Nodo();


};



#endif //NODO_H