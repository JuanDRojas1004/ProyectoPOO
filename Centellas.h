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

    Centellas(const string& nombre, int vida, int edad, float posicion);

    void actuar() override;
    void reproducirse() override;
    void morir() override;

};



#endif //CENTELLAS_H
