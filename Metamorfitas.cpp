//
// Created by juand on 25/04/2025.
//

#include "Metamorfitas.h"
#include <iostream>

Metamorfitas::Metamorfitas(const string& nombre, int vida, int edad, int x, int y)
        : Criaturas(nombre, vida, edad, x, y) {}

int Metamorfitas::adaptabilidad() {

}

void Metamorfitas::actuar() {
    if (!estaViva) return; //Verificar si está viva antes de actuar
    cout << nombre << " cambia de forma adaptándose al entorno. Adaptabilidad: " << adaptabilidad() << endl;
}

void Metamorfitas::reproducirse(vector<shared_ptr<Criaturas>>& criaturas) {
    if (!estaViva) return; //Verificar si está viva antes de reproducirse
    if (edad >= 1) {
        cout << nombre << " se ha reproducido " << endl;
        Metamorfitas* hijo = new Metamorfitas(nombre + "_hijo", 50, 0, posicion.first, posicion.second); //Se agrega un nuevo hijo al vector de hijos y queda en la misma posición del padre
        hijos.push_back(hijo);

        cout << "Nueva metamorfita: " << hijo->getNombre() //apuntar al metodo para obtener el nombre
             << " en posición (" << posicion.first << ", " << posicion.second << ")" << endl;
    } else {
        cout << nombre << " aun es muy joven para reproducirse " << endl;
    }
}

void Metamorfitas::morir() {
    if (vida <= 0 || edad >= 8) { //Condición para que la metamorfita muera cuando se le acabe la vida o cuando cumpla 8 ciclos
        estaViva = false;
        cout << nombre << " ha muerto " << endl;
    }
}

int Metamorfitas::getAdaptabilidad() {
    return adaptabilidad();
}

string Metamorfitas::getTipo() const {
    return "Metamorfita";
}
