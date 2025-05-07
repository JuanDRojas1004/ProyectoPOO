#ifndef CRIATURAS_H
#define CRIATURAS_H

#include <string>
#include <iostream>
#include <memory>
#include <utility>
#include <vector>
#include "Nodo.h"

using namespace std;


class Criaturas {
protected:
    string nombre;
    int vida;
    int edad;
    pair <int, int> posicion;
    bool estaViva;
    static vector<Criaturas*> hijos;

public:
    Criaturas(const string& nombre, int vida = 50, int edad = 0, int x = 0, int y = 0);

    virtual void actuar() = 0;
    virtual void reproducirse(vector<shared_ptr<Criaturas>>& criaturas, vector<vector<shared_ptr<Nodo>>>& mapa) = 0;
    virtual void morir();

    string getNombre();
    int getVida();
    int getEdad();

    virtual string getTipo() const = 0;

    int setVida(int valor);
    int setEdad(int valor);

    void setPosicion(int x, int y);
    pair<int, int> getPosicion();

    bool estaVivaFunc() const;
    const vector<Criaturas*>& obtenerHijos() const;

    void mover(int tamanioMapa);

    virtual ~Criaturas();
};

#endif // CRIATURAS_H