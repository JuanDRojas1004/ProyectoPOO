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
    LentosdeRaiz(const string& nombre, int vida, int edad, int x, int y);

    void actuar() override;
    void reproducirse() override;
    void morir() override;

};



#endif //LENTOSDERAIZ_H
