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
    cout << nombre << " cambia de forma adaptándose al entorno. Adaptabilidad: " << adaptabilidad() << endl;
}

void Metamorfitas::reproducirse() {
    cout << nombre << " se divide en dos metamorfitas diferentes " << endl;
}

void Metamorfitas::morir() {
    cout << nombre << " se disuelve en su entorno, dejando solo su esencia " << endl;
}
