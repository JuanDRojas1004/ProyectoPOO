//
// Created by juand on 05/05/2025.
//

#ifndef NODOJOVENPORSIEMPRE_H
#define NODOJOVENPORSIEMPRE_H
#include "Nodo.h"



class NodoJovenPorSiempre : public Nodo{

public:
    NodoJovenPorSiempre(int x, int y);

    void efectoEspecial(Criaturas *cri) override;
};



#endif //NODOJOVENPORSIEMPRE_H
