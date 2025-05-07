//
// Created by juand on 06/05/2025.
//

#ifndef NODOREGENERATIVO_H
#define NODOREGENERATIVO_H
#include "Nodo.h"


class NodoRegenerativo : public Nodo{


  public:

    NodoRegenerativo(int x, int y);;

    void efectoEspecial(Criaturas *cri) override;
};



#endif //NODOREGENERATIVO_H
