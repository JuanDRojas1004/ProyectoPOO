#ifndef CRIATURAS_H
#define CRIATURAS_H

#include <string>
#include <iostream>
#include <utility>
using namespace std;



class Criaturas {
protected:
    string nombre;
    int vida;
    int edad;
    pair <int, int> posicion;
    bool estaViva;

public:
    Criaturas(const string& nombre, int vida, int edad, int x, int y);

    virtual void actuar() = 0;
    virtual void reproducirse();
    virtual void morir() = 0;

    string getNombre();

    int getVida();

    int getEdad();

    pair<int, int> getPosicion();

    bool estaVivaFunc() const { return estaViva; }

};



#endif //CRIATURAS_H
