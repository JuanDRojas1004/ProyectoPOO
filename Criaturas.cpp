#include "Criaturas.h"
#include <random>

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

void Criaturas::mover(int tamañoMapa) {
    if (!estaViva) return; //Asegurarse de que la criatura esté viva para moverse
    vector<pair<int, int>> posiblesMovimientos; //Vector en el que se guardarán los posibles movimientos

    //Tupla con posición (x,y)
    int x = posicion.first;
    int y = posicion.second;

    if (x > 0) posiblesMovimientos.push_back({x - 1, y});               //izquierda
    if (x < tamañoMapa - 1) posiblesMovimientos.push_back({x + 1, y});  //derecha
    if (y > 0) posiblesMovimientos.push_back({x, y - 1});               //abajo
    if (y < tamañoMapa - 1) posiblesMovimientos.push_back({x, y + 1});  //arriba

    random_device rd; //
    mt19937 gen(rd());
    uniform_int_distribution<> dist(0, posiblesMovimientos.size() - 1);
    pair<int, int> nuevaPos = posiblesMovimientos[dist(gen)];

    posicion = nuevaPos;

    cout << nombre << " se movió a (" << posicion.first << ", " << posicion.second << ")." << endl;
}

