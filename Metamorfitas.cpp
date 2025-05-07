//
// Created by juand on 25/04/2025.
//

#include "Metamorfitas.h"
#include "Nodo.h"
#include <iostream>

Metamorfitas::Metamorfitas(const string& nombre, int vida, int edad, int x, int y)
        : Criaturas(nombre, vida, edad, x, y) {}

int Metamorfitas::adaptabilidad() {

}

void Metamorfitas::actuar() {
    if (!estaViva) return; //Verificar si está viva antes de actuar
    cout << nombre << " cambia de forma adaptándose al entorno. Adaptabilidad: " << adaptabilidad() << endl;
}

void Metamorfitas::reproducirse(vector<shared_ptr<Criaturas>>& criaturas,
vector<vector<shared_ptr<Nodo>>>& mapa) {
if (!estaViva) return;
if (edad >= 3) {
    cout << nombre << " ha cambiado... ¡una nueva metamorifta ha emergido!\n";
    auto hijo = make_shared<Metamorfitas>(nombre + "_hijo", 55, 0, posicion.first, posicion.second);
    criaturas.push_back(hijo);
    mapa[posicion.first][posicion.second]->agregarCriaturas(hijo.get());
    cout << "Nueva metamorifta: " << hijo->getNombre()
         << " en posicion (" << posicion.first << ", " << posicion.second << ")\n";
}
}

void Metamorfitas::morir() {
    if (vida <= 0 || edad >= 8) { //Condición para que la metamorfita muera cuando se le acabe la vida o cuando cumpla 8 ciclos
        estaViva = false;
        cout << nombre << " ha muerto " << endl;
    }
}

int Metamorfitas::getAdaptabilidad() {
    return adaptabilidad();
}

string Metamorfitas::getTipo() const {
    return "Metamorfita";
}
