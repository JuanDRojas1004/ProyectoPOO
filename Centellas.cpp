//
// Created by juand on 25/04/2025.
//

#include "Centellas.h"
#include "Nodo.h"
#include <iostream>

Centellas::Centellas(const string& nombre, int vida, int edad, int x, int y)
        : Criaturas(nombre, vida, edad, x, y) {}

int Centellas::velocidad() {
    return velocidad();
}

void Centellas::actuar() {
    if (!estaViva) return; //Verificar si está viva antes de actuar
    cout << nombre << " Se mueve rápidamente con velocidad: " << velocidad() << "." << endl;
}

void Centellas::reproducirse(vector<shared_ptr<Criaturas>>& criaturas,
vector<vector<shared_ptr<Nodo>>>& mapa) {
if (!estaViva) return;
if (edad >= 1) {
    cout << nombre << " ha liberado una chispa vibrante... ¡una nueva centella ha nacido!\n";
    auto hijo = make_shared<Centellas>(nombre + "_hijo", 50, 0, posicion.first, posicion.second);
    criaturas.push_back(hijo);
    mapa[posicion.first][posicion.second]->agregarCriaturas(hijo.get());
    cout << "Nueva centella: " << hijo->getNombre()
         << " en posición (" << posicion.first << ", " << posicion.second << ")\n";
}
}

void Centellas::morir() {
    if (vida <= 0 || edad > 5) { //Condición para que cuando se le acabe la vida o cumpla más de 5 ciclos, muera
        estaViva = false; //El booleano cambia a false para indicar que la criatura murió y no puede realizar más acciones
        cout << nombre << " ha muerto " << endl;
    }
}

int Centellas::getVelocidad() {
    return velocidad();
}

string Centellas::getTipo() const {
    return "Centella";
}

