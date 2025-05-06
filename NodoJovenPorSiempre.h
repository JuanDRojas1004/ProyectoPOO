//
// Created by juand on 05/05/2025.
//

#ifndef NODOJOVENPORSIEMPRE_H
#define NODOJOVENPORSIEMPRE_H
#include "Nodo.h"



class NodoJovenPorSiempre : public Nodo{

public:
    NodoJovenPorSiempre(int x, int y) : Nodo("JovenPorSiempre", x, y) {}

    void efectoEspecial(Criaturas *cri) override {
        if (cri -> getVida() > 1) {

        // para reducirle la vida

            cout << cri->getNombre() << " Ha rejuvenecido, ahora "
            << cri->getNombre() << " " << "tiene un cliclo menos" << endl;
        }

        else {
            cout << cri->getNombre() << " "
            << "es demasiado joven y no puede rejuvenecer mas" << endl;

        }
    }






};



#endif //NODOJOVENPORSIEMPRE_H
