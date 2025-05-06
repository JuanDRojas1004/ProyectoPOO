//
// Created by juand on 25/04/2025.
//

#ifndef LENTOSDERAIZ_H
#define LENTOSDERAIZ_H
#include "Criaturas.h"
#include <vector>


class LentosdeRaiz: public Criaturas {

private:
    float fertilidad;
public:
    LentosdeRaiz(const string& nombre, int vida = 50, int edad = 0, int x, int y);

    void actuar() override;
    void reproducirse(vector<shared_ptr<Criaturas>>& criaturas);
    void morir() override;

};



#endif //LENTOSDERAIZ_H
