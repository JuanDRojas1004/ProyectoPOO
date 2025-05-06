#include "Criaturas.h"

Criaturas::Criaturas(const string &nombre, int vida, int edad, int x, int y):
nombre(nombre), vida(vida), edad(edad), posicion(make_pair(x, y)), estaViva(true) {}

vector<Criaturas*> Criaturas::hijos;

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

bool Criaturas::estaVivaFunc() const {
    return estaViva;
}

const vector<Criaturas *> & Criaturas::obtenerHijos() const {
    return hijos;
}

void Criaturas::reproducirse(vector<shared_ptr<Criaturas>>& criaturas) {
    if (edad >= 1) {
        cout << nombre << " se ha reproducido creando una nueva criatura." << endl;
        cout << "Nueva criatura: " << nombre << "_hijo"
             << " en posición (" << posicion.first + 1 << ", " << posicion.second + 1 << ")" << endl;
    } else {
        cout << nombre << " es demasiado joven para reproducirse." << endl;
    }
}

