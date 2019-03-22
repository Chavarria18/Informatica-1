#include "Vector2d.hh"
#pragma once

//#pragma once



class Figura{

    public: 

    virtual double area()const ; 
    virtual void escalar(const double escala);
    virtual void mover(const Vector2d lugar);
    virtual bool estaAdentro(const Vector2d posicion); 

};