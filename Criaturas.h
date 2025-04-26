#ifndef CRIATURAS_H
#define CRIATURAS_H

#include <string>
#include <iostream>
using namespace std;



class Criaturas {
protected:
    string nombre;
    int vida;
    int edad;
    float posicion;

public:
    Criaturas(const string& nombre, int vida, int edad, float posicion);

    virtual void actuar() = 0;
    virtual void reproducirse() = 0;
    virtual void morir() = 0;

    string getNombre();

    int getVida();

    int getEdad();

    float getPosicion();

    virtual ~Criaturas();
};



#endif //CRIATURAS_H
