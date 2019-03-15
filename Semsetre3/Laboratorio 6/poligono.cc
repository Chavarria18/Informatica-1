#include "poligono.hh"
#include <iostream>


Poligono::Poligono(int vertices){}



int Poligono::vertices() const{
    return _vertices;
}

Poligono::~Poligono(){

    printf("Se destruyo\n");
    delete _vertices;
}









