#include "Vector2d.hh"
#include<string> 

int main(){


class Vehiculo{

    public:
    void getVelocidad(float t){  //Tarea 2 
        float dX = velocidad.x * t;
        float dY = velocidad.y * t;
       
    }

    void getPosicion(float t){  //Tarea 2 
        float posicionenX = posicion.x ; 
        float posicionenY = posicion.y ;         
    }

    void to_string(){
    std::stringstream Vector2d;
    Vector2d << "{x:" << posicion.x << ",y:" << posicion.y << "}";
    std::string s = Vector2d.str();
    printf(s.c_str()); 
    }
    const float t; 
    void acelerar(Vector2d& t){     //tarea 3 
    const Vector2d deltaAceleracion = velocidad.x + velocidad.y;
       
    
    } 
    public:
    Vector2d posicion; 
    Vector2d velocidad; 
};
