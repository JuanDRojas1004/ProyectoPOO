//
// Created by juand on 06/05/2025.
//

#include "NodoRegenerativo.h"

NodoRegenerativo::NodoRegenerativo(int x, int y): Nodo("Regenerativo", x, y) {}

void NodoRegenerativo::efectoEspecial(Criaturas *cri) {
    for(const auto& c : criaturas) {

        cout << "La criatura ha recibido un rocio especial, su vida ha aumentado en 5" << endl;

        c -> setVida(5);

    }
}
