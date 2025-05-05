#include "Criaturas.h"

Criaturas::Criaturas(const string &nombre, int vida, int edad, int x, int y): nombre(nombre), vida(vida), edad(edad),
                                                                              posicion(make_pair(x, y)) {
}

string Criaturas::getNombre() {
    return nombre;
}

int Criaturas::getVida() {
    return vida;
}

int Criaturas::getEdad() {
    return edad;
}

pair<int, int> Criaturas::getPosicion() {
    return posicion;
}

Criaturas::~Criaturas() {}
