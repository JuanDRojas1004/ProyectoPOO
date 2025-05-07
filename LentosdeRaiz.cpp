//
// Created by juand on 25/04/2025.
//

#include "LentosdeRaiz.h"
#include "Nodo.h"
#include <iostream>

LentosdeRaiz::LentosdeRaiz(const string& nombre, int vida, int edad, int x, int y)
        : Criaturas(nombre, vida, edad, x, y) {
    fertilidad = 0.5; //fertilidad base para comenzar
}

void LentosdeRaiz::actuar() {
    if (!estaViva) return;
    cout << nombre << " se queda quieto, absorbiendo nutrientes " << endl;
}

void LentosdeRaiz::reproducirse(vector<shared_ptr<Criaturas>>& criaturas,
vector<vector<shared_ptr<Nodo>>>& mapa) {
if (!estaViva) return;
if (edad >= 2) {
    cout << nombre << " ha echado raíces nuevas... ¡un nuevo lento ha nacido!\n";
    auto hijo = make_shared<LentosdeRaiz>(nombre + "_hijo", 60, 0, posicion.first, posicion.second);
    criaturas.push_back(hijo);
    mapa[posicion.first][posicion.second]->agregarCriaturas(hijo.get());
    cout << "Nuevo lento: " << hijo->getNombre()
         << " en posición (" << posicion.first << ", " << posicion.second << ")\n";
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

string LentosdeRaiz::getTipo() const {
    return "Lento de Raiz";
}

