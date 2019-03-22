#include "Vector2d.hh"
#include "Vehiculo.hh"
#include <string> 
#include <iostream>
#include <sstream>
using namespace std; 


Vehiculo::Vehiculo() : Velocidad(0.0,0.0), Posicion(0.0,0.0) {}


Vector2d Vehiculo::getVelocidad()const{
        return Velocidad; 
}

Vector2d Vehiculo::getPosicion()const{
        return Posicion; 
}

const std::string Vehiculo::to_string()const {
    std::stringstream valtotal;
    valtotal << "{La posicion es:" << Posicion.to_string() << ",La velocidad es:" << Velocidad.to_string() << "}";
    std::string s = valtotal.str();
    printf(s.c_str());
}

void Vehiculo::acelerar(const Vector2d& v, float tiempo){
    float ts = tiempo; 
    while(ts > 1){
        Velocidad = Velocidad + v; 
        Posicion = Posicion + Velocidad; 
        ts = ts -1; 

    }
    Velocidad = Velocidad + (v + ts);
    Posicion = Posicion + Velocidad; 
}


void Vehiculo::avanzar(float t){
    Posicion = Posicion + (Velocidad * t); 

    Posicion.x = (Posicion.x + Velocidad.x)* t;
    Posicion.y = (Posicion.y + Velocidad.y )* t;
}












