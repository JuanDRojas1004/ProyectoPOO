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

void LentosdeRaiz::reproducirse(vector<shared_ptr<Criaturas>>& criaturas) {
    if (!estaViva) return;
    if (edad >= 1 && fertilidad >= 1.8) {
        cout << nombre << " ha extendido sus raíces... ¡una nueva criatura ha brotado!\n";

        LentosdeRaiz* hijo = new LentosdeRaiz(nombre + "_hijo", 50, 0, posicion.first, posicion.second);
        hijos.push_back(hijo);

        cout << "Nuevo lento de raíz: " << hijo->getNombre()
             << " en posición (" << posicion.first << ", " << posicion.second << ")\n";
    } else {
        cout << nombre << " no tiene suficiente fertilidad o edad para reproducirse.\n";
    }
}
void LentosdeRaiz::morir(){
    if (vida <= 0 || fertilidad < -1.5) {
        estaViva = false;
        cout << nombre << " ha muerto " << endl;
    }
}

