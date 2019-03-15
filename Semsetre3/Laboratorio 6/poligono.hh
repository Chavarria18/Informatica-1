#pragma once
#include"contenedor.hh"

class Poligono: public Container{
    public: 
    
    Poligono(int _vertices);
    virtual int vertices() const override;
    ~Poligono();

    private:
    int _vertices;
    

}; 
