//
// Created by juand on 25/04/2025.
//

#include "Metamorfitas.h"
#include <iostream>

Metamorfitas::Metamorfitas(const string& nombre, int vida, int edad, int x, int y)
        : Criaturas(nombre, vida, edad, x, y) {}

float Metamorfitas::adaptabilidad() {
    //h
}

void Metamorfitas::actuar() {
    if (!estaViva) return;
    cout << nombre << " cambia de forma adaptándose al entorno. Adaptabilidad: " << adaptabilidad() << endl;
}

void Metamorfitas::reproducirse(vector<shared_ptr<Criaturas>>& criaturas) {
    if (!estaViva) return;
    if (edad >= 1) {
        cout << nombre << " se ha reproducido " << endl;
        Metamorfitas* hijo = new Metamorfitas(nombre + "_hijo", 50, 0, posicion.first, posicion.second);
        hijos.push_back(hijo);

        cout << "Nueva metamorfita: " << hijo->getNombre()
             << " en posición (" << posicion.first << ", " << posicion.second << ")" << endl;
    } else {
        cout << nombre << " aun es muy joven para reproducirse " << endl;
    }
}

void Metamorfitas::morir() {
    if (vida <= 0 || edad >= 137) {
        estaViva = false;
        cout << nombre << " ha muerto " << endl;
    }
}

int Metamorfitas::getAdaptabilidad() {
    return adaptabilidad();
}
