#ifndef METAMORFITAS_H
#define METAMORFITAS_H

#include "Criaturas.h"

class Metamorfitas : public Criaturas { //Heredar los atributos públicos de Criaturas
private:
    int adaptabilidad(); //atributo propio de metamorfitas

public:

    //Constructor
    Metamorfitas(const string& nombre, int vida = 50, int edad = 0, int x = 0, int y = 0);

    void actuar() override;
    void reproducirse(vector<shared_ptr<Criaturas>>& criaturas, vector<vector<shared_ptr<Nodo>>>& mapa) override;
    void morir() override;
    int getAdaptabilidad();
    string getTipo() const override;
};

#endif // METAMORFITAS_H
