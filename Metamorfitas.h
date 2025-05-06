#ifndef METAMORFITAS_H
#define METAMORFITAS_H

#include "Criaturas.h"

class Metamorfitas : public Criaturas {
private:
    float adaptabilidad();

public:
    Metamorfitas(const string& nombre, int vida = 50, int edad = 0, int x, int y);

    void actuar() override;
    void reproducirse(vector<shared_ptr<Criaturas>>& criaturas) override;
    void morir() override;
};

#endif // METAMORFITAS_H
