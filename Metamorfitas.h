//
// Created by juand on 25/04/2025.
//

#ifndef METAMORFITAS_H
#define METAMORFITAS_H
#include "Criaturas.h"

#endif //METAMORFITAS_H

class Metamorfitas : public Criaturas {
private:
    float adaptabilidad();

    public:

        Metamorfitas(const string& nombre, int vida, int edad, int x, int y);

    void actuar() override;
    void reproducirse() override;
    void morir() override;

};