//
// Created by juand on 05/05/2025.
//

#ifndef NODOVENENOSO_H
#define NODOVENENOSO_H
#include "Nodo.h"



class NodoVenenoso : public Nodo{

public:
    NodoVenenoso(int x, int y) : Nodo("Venenoso", x, y) {}

    void efectoEspecial(Criaturas *cri) override {
        cout << cri->getNombre() << " pierde 5 de vida por veneno.\n";
    }


};



#endif //NODOVENENOSO_H
