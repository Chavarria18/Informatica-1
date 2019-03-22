#pragma once 
#include "Vector2d.hh"
#include<string> 


//Tarea 2 , 3 , 4 
class Vehiculo{

    public:
    Vehiculo();    //inicia sin ningun parametro
    Vector2d getVelocidad()const;
    Vector2d getPosicion()const;
    const std::string to_string() const;

    Vehiculo operator+() ;
    Vehiculo operator*() ;
     

    void acelerar(const Vector2d&, float tiempo);
    void avanzar(float t); 
    
    
    
    private: 
    Vector2d Velocidad; 
    Vector2d Posicion; 

};