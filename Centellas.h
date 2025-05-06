//
// Created by juand on 25/04/2025.
//

#ifndef CENTELLAS_H
#define CENTELLAS_H
#include <string>

#include "Criaturas.h"

using namespace std;

class Centellas : public Criaturas {
private:
    int velocidad();
public:

    Centellas(const string& nombre, int vida = 50, int edad = 0, int x, int y);

    void actuar() override;
    void reproducirse(vector<shared_ptr<Criaturas>>& criaturas) override;
    void morir() override;

};



#endif //CENTELLAS_H
