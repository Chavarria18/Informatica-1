#pragma once //indica que lo quiero incluir una vez
//encabezsados, cuales son lo tipos, los paramtros que utiliza
class Vector{

    public:
    Vector(int size);
    double& operator[](int ix);//retorno una referencia, un lugar de la memoria leer lo que esta en la dirreccion
    //tiene que ser una referencia si no no retornaria nada 
    int size() const; 
    //double& operator[](int ix)const; no podria utilizarlo solo leerlo 

    private: 
    int  _size; 
    double* _valores; //se inicializan en el orden que se utlizan 
    
}; 
//itcache 2 el siguiente lo borra el otro lo vuelve a borrar, porque coomo el puntero señala a una dirreccion
//polimorfico varios valores diferentes corresponden con un tipo 
//por nombre lo copia , el compliador reserva espacio en memoria y copia el parametro 
//pasar por referencia 
//listas encadenadas punteros a otros nodos






//dar todos los archivos cc para compilar 
