//
// Created by juand on 25/04/2025.
//

#ifndef CENTELLAS_H
#define CENTELLAS_H
#include <string>

#include "Criaturas.h"

using namespace std;

class Centellas : public Criaturas { //Heredar los atributos públicos de Criaturas
private:
    int velocidad(); //Atributo propio de las centellas
public:

    //Constructor
    Centellas(const string& nombre, int vida = 50, int edad = 0, int x = 0, int y = 0);

    void actuar() override;
    void reproducirse(std::vector<std::shared_ptr<Criaturas>>& criaturas, vector<vector<shared_ptr<Nodo>>>& mapa) override;
    void morir() override;
    int getVelocidad();
    string getTipo() const override;
};



#endif //CENTELLAS_H
