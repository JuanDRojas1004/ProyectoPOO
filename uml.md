```mermaid
classDiagram
    class Criaturas {
        #string nombre
        #int vida
        #int edad
        #pair<int,int> posicion
        #bool estaViva
        +mover(int)
        +reproducirse(vector~shared_ptr<Criaturas>~&, vector~vector~shared_ptr<Nodo>~~>&)
        +morir()
        +getTipo() string
        +setVida(int) int
        +setEdad(int) int
        +setPosicion(int,int)
        +getPosicion() pair<int,int>
        +estaVivaFunc() bool
        +~Criaturas()
    }

    class Centellas {
        -int velocidad()
        +reproducirse(...)
        +morir()
        +getTipo() string
    }

    class LentosdeRaiz {
        -float fertilidad
        +getFertilidad()
        +reproducirse(...)
        +morir()
        +getTipo() string
    }

    class Metamorfitas {
        -int adaptabilidad()
        +getAdaptabilidad()
        +reproducirse(...)
        +morir()
        +getTipo() string
    }

    class Nodo {
        -pair<int,int> posicion
        -string tipo
        #vector<Criaturas*> criaturas
        +agregarCriaturas(Criaturas*)
        + efectoEspecial(Criaturas*)
        +eliminarCriatura(Criaturas*)
        +mostrarCriaturas() const
        +cantidadCriaturas() int
        +getTipo() string
        +~Nodo()
    }

    class NodoNormal {
        +efectoEspecial(Criaturas*)
    }

    class NodoVenenoso {
        +efectoEspecial(Criaturas*)
    }

    class NodoRegenerativo {
        +efectoEspecial(Criaturas*)
    }

    class NodoJovenPorSiempre {
        +efectoEspecial(Criaturas*)
    }

    Criaturas <|-- Centellas
    Criaturas <|-- LentosdeRaiz
    Criaturas <|-- Metamorfitas

    Nodo <|-- NodoNormal
    Nodo <|-- NodoVenenoso
    Nodo <|-- NodoRegenerativo
    Nodo <|-- NodoJovenPorSiempre

    Nodo "1" o-- "*" Criaturas : contiene
