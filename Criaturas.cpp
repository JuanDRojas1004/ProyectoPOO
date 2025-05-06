#include "Criaturas.h"

Criaturas::Criaturas(const string &nombre, int vida, int edad, int x, int y):
nombre(nombre), vida(vida), edad(edad), posicion(make_pair(x, y)), estaViva(true) {}

//Vector para almacenar a los hijos de las criaturas
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

int Criaturas::setVida(int valor) {
    vida += valor; //sumar y disminuir vida
    return vida;
}

int Criaturas::setEdad(int valor) {
    edad += valor; //sumar y disminuir edad
    return edad;
}

void Criaturas::setPosicion(int x, int y) {
    posicion.first = x;
    posicion.second = y;
}


pair<int, int> Criaturas::getPosicion() { //Trabajamos la posición como un par
    return posicion;
}

bool Criaturas::estaVivaFunc() const { //Función booleana para validar si la criatura está viva o no
    return estaViva;
}

const vector<Criaturas *> & Criaturas::obtenerHijos() const {
    return hijos;
}

void Criaturas::reproducirse(vector<shared_ptr<Criaturas>>& criaturas) {
}

