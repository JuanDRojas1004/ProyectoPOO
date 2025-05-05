//
// Created by juand on 25/04/2025.
//

#include "LentosdeRaiz.h"
#include <iostream>

LentosdeRaiz::LentosdeRaiz(const string& nombre, int vida, int edad, int x, int y)
        : Criaturas(nombre, vida, edad, x, y) {
    fertilidad = 0.5; //para iniciar?
}

void LentosdeRaiz::actuar() {
    if (!estaViva) return;
    cout << nombre << " se queda quieto, absorbiendo nutrientes " << endl;
}

void LentosdeRaiz::reproducirse() {
    if (!estaViva) return;
    if (fertilidad >= 1.8)
        cout << nombre << " se ha reproducido ";
    else {
        cout << nombre << " no es suficientemente fertil para reproducirse " << endl;
    }
}

void LentosdeRaiz::morir() {
    if (vida <= 0 || fertilidad < -1.5) {
        estaViva = false;
        cout << nombre << " ha muerto " << endl;
    }
}

