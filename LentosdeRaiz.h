//
// Created by juand on 25/04/2025.
//

#ifndef LENTOSDERAIZ_H
#define LENTOSDERAIZ_H
#include "Criaturas.h"


class LentosdeRaiz: public Criaturas {

private:
    float fertilidad;

public:
    LentosdeRaiz(float fertilidad);
    float getFertilidad();

};



#endif //LENTOSDERAIZ_H
