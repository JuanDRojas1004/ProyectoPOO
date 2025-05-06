//
// Created by juand on 05/05/2025.
//

#include "NodoJovenPorSiempre.h"

NodoJovenPorSiempre::NodoJovenPorSiempre(int x, int y): Nodo("JovenPorSiempre", x, y) {}

void NodoJovenPorSiempre::efectoEspecial(Criaturas *cri) {
    for (const auto& c : criaturas) {
        if (c -> getVida() > 1) {


            cout << c->getNombre() << " Ha rejuvenecido, ahora "
                    << c->getNombre() << " " << "tiene un cliclo menos" << endl;
            c -> setVida(-1);
        }

        else {
            cout << c->getNombre() << " "
                    << "es demasiado joven y no puede rejuvenecer mas" << endl;

        }
    }
}
