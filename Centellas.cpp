//
// Created by juand on 25/04/2025.
//

#include "Centellas.h"
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

void Centellas::reproducirse(vector<shared_ptr<Criaturas>>& criaturas) {
    if (!estaViva) return; //Verificar si está viva antes de reproducirse
    if (edad >= 1) { //Condición para que se reproduzca sólo si tiene 1 o más ciclos
        cout << nombre << " se ha reproducido" << endl;
        Centellas* hijo = new Centellas(nombre + "_hijo", 50, 0, posicion.first, posicion.second);
        hijos.push_back(hijo);

        cout << "Nueva centella: " << hijo->getNombre()
             << " en posición (" << posicion.first << ", " << posicion.second << ")" << endl;
    } else {
        cout << nombre << " es demasiado joven para reproducirse " << endl;
    }
}

void Centellas::morir() {
    if (vida <= 0 || edad > 5) {
        estaViva = false;
        cout << nombre << " ha muerto " << endl;
    }
}

int Centellas::getVelocidad() {
    return velocidad();
}

