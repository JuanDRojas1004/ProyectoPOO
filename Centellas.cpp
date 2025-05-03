//
// Created by juand on 25/04/2025.
//

#include "Centellas.h"

//
// Created by juand on 25/04/2025.
//

#include "Centellas.h"
#include <iostream>

Centellas::Centellas(const string& nombre, int vida, int edad, float posicion)
        : Criaturas(nombre, vida, edad, posicion) {}

int Centellas::velocidad() {
    //return
}

void Centellas::actuar() {
    cout << nombre << " Se mueve rápidamente con velocidad: " << velocidad() << "." << endl;
}

void Centellas::reproducirse() {
    cout << nombre << " Se ha dividido en dos Centellas " << endl;
}

void Centellas::morir() {
    cout << nombre << " Ha muerto " << endl;
}

