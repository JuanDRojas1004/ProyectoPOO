cmake_minimum_required(VERSION 3.30)
project(Mapas)

set(CMAKE_CXX_STANDARD 20)

add_executable(Mapas main.cpp
        Criaturas.cpp
        Criaturas.h
        LentosdeRaiz.cpp
        LentosdeRaiz.h
        Centellas.cpp
        Centellas.h
        Metamorfitas.cpp
        Metamorfitas.h
        Metamorfitas.h
        Nodo.cpp
        Nodo.h
        NodoNormal.cpp
        NodoNormal.h
        NodoVenenoso.cpp
        NodoVenenoso.h
        NodoJovenPorSiempre.cpp
        NodoJovenPorSiempre.h
        NodoRegenerativo.cpp
        NodoRegenerativo.h
)
