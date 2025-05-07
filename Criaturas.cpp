#include "Criaturas.h"
#include "Nodo.h"
#include <random>

vector<Criaturas*> Criaturas::hijos;

Criaturas::Criaturas(const string &nombre, int vida, int edad, int x, int y)
        : nombre(nombre), vida(vida), edad(edad), posicion(make_pair(x, y)), estaViva(true) {}

string Criaturas::getNombre() { return nombre; }
int Criaturas::getVida() { return vida; }
int Criaturas::getEdad() { return edad; }
int Criaturas::setVida(int valor) { vida += valor; return vida; }
int Criaturas::setEdad(int valor) { edad += valor; return edad; }
void Criaturas::setPosicion(int x, int y) { posicion.first = x; posicion.second = y; }
pair<int, int> Criaturas::getPosicion() { return posicion; }
bool Criaturas::estaVivaFunc() const { return estaViva; }
const vector<Criaturas*>& Criaturas::obtenerHijos() const { return hijos; }

void Criaturas::reproducirse(vector<shared_ptr<Criaturas>>& criaturas, vector<vector<shared_ptr<Nodo>>>& mapa) {
    // Este metodo no se usa, es virtual puro, pero definimos vacío para evitar linker error si se llama accidentalmente
}

void Criaturas::morir() {
    estaViva = false;
}

void Criaturas::mover(int tamanioMapa) {
    if (!estaViva) return;
    vector<pair<int, int>> posiblesMovimientos;

    int x = posicion.first;
    int y = posicion.second;

    if (x > 0) posiblesMovimientos.push_back({x - 1, y});
    if (x < tamanioMapa - 1) posiblesMovimientos.push_back({x + 1, y});
    if (y > 0) posiblesMovimientos.push_back({x, y - 1});
    if (y < tamanioMapa - 1) posiblesMovimientos.push_back({x, y + 1});

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(0, posiblesMovimientos.size() - 1);
    pair<int, int> nuevaPos = posiblesMovimientos[dist(gen)];

    posicion = nuevaPos;
    cout << nombre << " se movio a (" << posicion.first << ", " << posicion.second << ")." << endl;
}

Criaturas::~Criaturas() = default;
