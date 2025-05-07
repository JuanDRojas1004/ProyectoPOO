//
// Created by juand on 05/05/2025.
//

#ifndef NODONORMAL_H
#define NODONORMAL_H
#include "Nodo.h"

class NodoNormal : public Nodo{

public:
    NodoNormal(int x, int y);

    void efectoEspecial(Criaturas* cri) override;
};



#endif //NODONORMAL_H
