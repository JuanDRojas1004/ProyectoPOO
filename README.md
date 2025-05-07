# El Valle Iridiano


## Descripcion:

Este proyecto consiste en modelar un entorno compuesto de Nodos (habitats) y Criaturas (seres vivos). Tanto cada nodo como cada criatura cuenta con sus caracteristicas especificas,
estas caracteristicas pueden ser desde adaptarse a su entorno hasta tener la posibilidad de reproducirse en cualquier lugar. La simulacion de vida se da a traves de ciclos, al
simular un ciclo cada criatura realiza una accion aleatoria como lo son el moverse de nodo, reproducirse o simplemente no hacer nada.


-----+-----


## Tipos de Criaturas:

### Centella ⚡
- Habilidad: Se desplaza con mayor facilidad entre los nodos.
- Descripcion: Es la mas rapida de las criaturas.

### Lento de Raiz 🌿
- Habilidad: Tiene una mayor posibilidad de reproducirse que las demas criaturas.
- Descripcion: Es la criatura mas hot 🔥 de todas.

### Metamorfita 🧬
- Habilidad: Se adapta facilmente a su entorno.
- Descripcion: Es la criatura mas inteligente de todas.


## Tipos de Nodos:

### Nodo Normal
- Descripcion: Estes es el nodo base, aqui es donde la criatura puede estar en su estado mas neutral posible.

### Nodo Venenoso
- Descripcion: Este tipo de nodos se crearon debido a una explosion subterranea la cual levanto materiales toxicos en el ambiente.
- Efecto Especial: Cuando una criatura se encuentra en ese nodo la criatura perdera 10 de vida por cada ciclo que permanezca en el.

### Nodo Joven por Siempre
- Descripcion: Despues de la gran explosion, la fuente de la juventud exploto en mil pedazos dejando fragmentos de si misma regados
  por todo el mundo, este tipo de nodos se crearon al rededor de estos fragmentos, logrando asi que las criaturas de su alrededor puedan
  rejuvenecer por cada ciclo que pasen en el.
- Efecto Especial: Cada ciclo que una criatura pase en este nodo su edad se vera reducida en un ciclo, esta dejara de rejuvenecer si la
  edad de la criatura es menor o igual a un ciclo.

### Nodo Regenerativo
- Descripcion: Este nodo contiene dentro de si platas medicinales las cuales curan a las criaturas mediante las esporas que esparcen por todo el nodo.
- Efecto Especial: Cada criatura que se encuentre en este nodo se curara 5 puntos de vida por cada ciclo que pase en el.


## Explicacion breve del funcionamiento del Codigo:

### Nodos 🧱

- La clase base **Nodo** representa una casilla del mapa.

- Cada nodo tiene:

  - Su tipo (normal, venenoso, rejuvenecedor, etc.)

  - Una posición en el mapa **(x, y)**

  - Un vector de criaturas que viven en él

- Cada nodo tiene un método virtual puro efectoEspecial(Criaturas\*), que define su comportamiento particular sobre las criaturas.

#### Tipos de nodos derivados:

- **NodoNormal:** No tiene efecto especial.

- **NodoVenenoso:** Resta vida a las criaturas.

- **NodoJovenPorSiempre:** Reduce la edad de las criaturas.

- **NodoRegenerativo:** Aumenta la vida de las criaturas.

- Otros pueden reproducir automáticamente o tener combinaciones.



### Criaturas 👾

- La clase abstracta **Criaturas** representa los seres vivos del mundo.

- Tienen:

  - Nombre, edad, vida y posición

  - Un estado **estaViva**

  - Métodos virtuales: actuar(), reproducirse(), morir(), que se implementan en las subclases

#### Tipos de criaturas:

- **Metamorfitas**, **Centellas**, **LentosdeRaiz**, etc. (dependiendo de tus clases concretas)

- Cada tipo puede comportarse diferente al actuar en un ciclo: por ejemplo, algunos se mueven más, otros se reproducen más fácilmente, etc.



### Ciclos del programa 🔄 

- El programa se ejecuta en ciclos (simulaciones del paso del tiempo).

- En cada ciclo:

  - Se recorren todos los nodos.

  - En cada nodo, las criaturas pueden:

    - Actuar (elegir una acción aleatoria: moverse, reproducirse, etc.)

    - Sufrir los efectos especiales del nodo.

    - Morir si su vida llega a 0.



### El mapa 🗺️

- El mapa es una matriz de punteros a nodos **(vector<vector<Nodo\*>>)**.

- Cada celda contiene un nodo que puede ser de cualquier tipo.

- Se puede imprimir visualmente con la función imprimirMapa() para ver el estado actual del mundo (tipo de nodo y cantidad de criaturas en cada celda).



### Equipo de Desarrollo

| Rol | Nombre | GitHub |
|-----|--------|--------|
| **Líder Técnico y Desarrollador** | Juan David Rojas | (https://github.com/JuanDRojas1004) |
| **Responsable de Calidad, Documentación y Desarrollador** | Isabella Garzon| (https://github.com/isabellitaxDioshija) |











