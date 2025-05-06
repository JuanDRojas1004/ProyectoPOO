//
// Created by juand on 05/05/2025.
//

#include "NodoVenenoso.h"

NodoVenenoso::NodoVenenoso(int x, int y): Nodo("Venenoso", x, y) {}

void NodoVenenoso::efectoEspecial(Criaturas *cri) {
    for (const auto& c : criaturas) {
        cout << c->getNombre() << " pierde 10 de vida por veneno.\n";

        c -> setVida(-10);


    }
}
