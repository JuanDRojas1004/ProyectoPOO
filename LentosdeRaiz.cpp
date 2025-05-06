//
// Created by juand on 25/04/2025.
//

#include "LentosdeRaiz.h"
#include <iostream>

LentosdeRaiz::LentosdeRaiz(const string& nombre, int vida, int edad, int x, int y)
        : Criaturas(nombre, vida, edad, x, y) {
    fertilidad = 0.5; //fertilidad base para comenzar
}

void LentosdeRaiz::actuar() {
    if (!estaViva) return;
    cout << nombre << " se queda quieto, absorbiendo nutrientes " << endl;
}

void LentosdeRaiz::reproducirse(vector<shared_ptr<Criaturas>>& criaturas) {
    if (!estaViva) return;
    if (edad >= 1 && fertilidad >= 1.8) { //condición para que se pueda reproducir
        cout << nombre << " ha extendido sus raíces... ¡una nueva criatura ha brotado!\n";

        LentosdeRaiz* hijo = new LentosdeRaiz(nombre + "_hijo", 50, 0, posicion.first, posicion.second); //el hijo nace en la posición del padre, se pone así ya que estamos trabajando con pares

        hijos.push_back(hijo);//agregar un hijo nuevo al vector de hijos

        cout << "Nuevo lento de raíz: " << hijo->getNombre() //apuntar al metodo
             << " en posición (" << posicion.first << ", " << posicion.second << ")\n";
    } else {
        cout << nombre << " no tiene suficiente fertilidad o edad para reproducirse.\n";
    }
}
void LentosdeRaiz::morir(){
    if (vida <= 0 || fertilidad < -1.5 || edad > 9) { //condición para que muera cuando no le quede vida, cuando su fertilidad esté por debajo de -1.5 y cuando haya cumplido 9 ciclos
        estaViva = false; //cambiar el bool a false para que ya no pueda seguir actuando
        cout << nombre << " ha muerto " << endl;
    }
}

float LentosdeRaiz::getFertilidad() {
    return fertilidad;
}

