//implementacion
#include"vector.hh"
#include<stdio.h> 

Vector::Vector(int size) : _size(size), _valores{new double[size]}{      //se hace para inicializar variables , inicializar objetos con el mismo valor
                                                                        //en el momento que se cree la clase se crea con esos parametros 
Vector::~Vector{
    delete[] _valores; 
}


double& Vector::operator[](int i){                                      //overlord implementar metodos estandarizados 
    return _valores[i]; 
}

int Vector::size() const{
    return _size; 
}


}
