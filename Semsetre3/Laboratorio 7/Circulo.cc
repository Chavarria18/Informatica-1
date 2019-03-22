#include"Circulo.hh"
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>


Circulo::Circulo(Vector2d centro, double _radio): centro(centro) ,_radio(_radio){}

double Circulo::area()const {
    double areaC = M_PI * (_radio * _radio); 
    return areaC; 
}

void escalar(const double escalax);



/*
const std::string Circulo::to_string()const {
    std::stringstream valtotal;
    valtotal << "{La posicion es:" << Posicion.to_string() << ",La velocidad es:" << Velocidad.to_string() << "}";
    std::string s = valtotal.str();
    printf(s.c_str());
}



*/ 
        