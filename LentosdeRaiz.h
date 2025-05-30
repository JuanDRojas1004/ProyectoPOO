//
// Created by juand on 25/04/2025.
//

#ifndef LENTOSDERAIZ_H
#define LENTOSDERAIZ_H
#include "Criaturas.h"
#include <vector>


class LentosdeRaiz: public Criaturas { //Heredar los atributos públicos de Criaturas
private:
    float fertilidad; //atributo propio de lentos de raíz
public:

    //Constructor
    LentosdeRaiz(const string& nombre, int vida = 50, int edad = 0, int x = 0, int y = 0);

    void actuar() override;
    void reproducirse(vector<shared_ptr<Criaturas>>& criaturas, vector<vector<shared_ptr<Nodo>>>& mapa) override;
    void morir() override;
    float getFertilidad();
    string getTipo() const override;
};



#endif //LENTOSDERAIZ_H
