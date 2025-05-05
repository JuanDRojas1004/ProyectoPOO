//
// Created by juand on 25/04/2025.
//

#include "Centellas.h"

//
// Created by juand on 25/04/2025.
//

#include "Centellas.h"
#include <iostream>

Centellas::Centellas(const string& nombre, int vida, int edad, int x, int y)
        : Criaturas(nombre, vida, edad, x, y) {}

int Centellas::velocidad() {
    //return
}

void Centellas::actuar() {
    if (!estaViva) return;
    cout << nombre << " Se mueve rápidamente con velocidad: " << velocidad() << "." << endl;
}

void Centellas::reproducirse() {
    if (!estaViva) return;
    cout << nombre << " se ha reproducido" << endl;
}

void Centellas::morir() {
    if (vida <= 0 || edad > 86) {
        estaViva = false;
        cout << nombre << " ha muerto " << endl;
    }
}

