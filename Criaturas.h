#ifndef CRIATURAS_H
#define CRIATURAS_H

#include <string>
#include <iostream>
#include <memory>
#include <utility>
#include <vector>
using namespace std;



class Criaturas {
protected:
    string nombre;
    int vida;
    int edad;
    pair <int, int> posicion; //Par para la posición de las criaturas
    bool estaViva;
    static vector<Criaturas*> hijos; //Vector para almacenar a los hijos de las criaturas

public:

    //Constructor
    Criaturas(const string& nombre, int vida = 50, int edad = 0, int x, int y);

    virtual void actuar() = 0;
    virtual void reproducirse(vector<shared_ptr<Criaturas>>& criaturas) = 0;
    virtual void morir();

    string getNombre();

    int getVida();

    int getEdad();

    int setVida(int valor);

    int setEdad(int valor);

    void setPosicion(int x, int y);

    pair<int, int> getPosicion();

    bool estaVivaFunc() const;

    const vector<Criaturas*>& obtenerHijos() const;
};



#endif //CRIATURAS_H
