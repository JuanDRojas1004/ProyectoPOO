#include "Criaturas.h"

Criaturas::Criaturas(const string &nombre, int vida, int edad, float posicion): nombre(nombre), vida(vida), edad(edad), posicion(posicion) {}

string Criaturas::getNombre() {
    return nombre;
}

int Criaturas::getVida() {
    return vida;
}

int Criaturas::getEdad() {
    return edad;
}

float Criaturas::getPosicion() {
    return posicion;
}

Criaturas::~Criaturas() {}
