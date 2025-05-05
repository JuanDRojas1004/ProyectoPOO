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
    cout << nombre << " se queda quieto, absorbiendo nutrientes " << endl;
}

void LentosdeRaiz::reproducirse() {
    if (fertilidad >= 1.8)
        cout << nombre << " se ha reproducido ";
    else {
        cout << nombre << " no es suficientemente fertil para reproducirse ";
    }
}

void LentosdeRaiz::morir() {
    cout << nombre << " se marchita lentamente y se convierte en abono " << endl;
}

