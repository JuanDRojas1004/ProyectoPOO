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

void Metamorfitas::reproducirse() {
    if (!estaViva) return;
    cout << nombre << " se divide en dos metamorfitas diferentes " << endl;
}

void Metamorfitas::morir() {
    if (vida <= 0 || edad >= 137) {
        estaViva = false;
        cout << nombre << " ha muerto " << endl;
    }
}