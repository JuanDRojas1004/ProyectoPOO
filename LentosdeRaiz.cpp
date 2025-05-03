//
// Created by juand on 25/04/2025.
//

#include "LentosdeRaiz.h"
#include <iostream>

LentosdeRaiz::LentosdeRaiz(const string& nombre, int vida, int edad, float posicion)
        : Criaturas(nombre, vida, edad, posicion) {
    fertilidad = 0.5; //para iniciar
}

void LentosdeRaiz::actuar() {
    cout << nombre << " se queda quieto, absorbiendo nutrientes " << endl;
}

void LentosdeRaiz::reproducirse() {
    cout << nombre << " Extiende raíces y genera un brote cercano " << endl;
}

void LentosdeRaiz::morir() {
    cout << nombre << " se marchita lentamente y se convierte en abono " << endl;
}

