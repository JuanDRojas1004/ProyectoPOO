//
// Created by juand on 05/05/2025.
//

#ifndef NODOVENENOSO_H
#define NODOVENENOSO_H
#include "Nodo.h"



class NodoVenenoso : public Nodo{

public:
    NodoVenenoso(int x, int y);

    void efectoEspecial(Criaturas *cri) override;
};



#endif //NODOVENENOSO_H
