#pragma once
#include "Figura.hh"
#include <string.h> 

//Tarea #1 
class Circulo : public Figura{

        public:

        Circulo(Vector2d centro, double _radio); 
        
        virtual double area()const override = 0; 
        virtual void escalar(const double escalax) override = 0;
        virtual void mover(const Vector2d lugarx) override = 0;
        virtual bool estaAdentro(const Vector2d posicionx) override = 0; 

        virtual const std::string to_string() const;

        virtual ~Circulo(); 

              
        private: 

        double _radio; 
        Vector2d centro; 


       

}; 
