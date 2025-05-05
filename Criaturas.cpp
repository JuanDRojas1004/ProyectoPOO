#include "Criaturas.h"

Criaturas::Criaturas(const string &nombre, int vida, int edad, int x, int y):
nombre(nombre), vida(vida), edad(edad), posicion(make_pair(x, y)) {}

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

void Criaturas::reproducirse() {
    if (edad >= 1) {
        cout << nombre << " se ha reproducido creando una nueva criatura.\n";
        cout << "Nueva criatura: " << nombre << "_hijo"
             << " en posición (" << posicion.first + 1 << ", " << posicion.second + 1 << ")\n";
    } else {
        cout << nombre << " es demasiado joven para reproducirse.\n";
    }
}

