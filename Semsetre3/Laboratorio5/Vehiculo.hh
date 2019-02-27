#include "Vector2d.hh"

class Vehiculo{

    public:
    void avanzar(float t){
        float dX = velocidad.x * t;
        float dY = velocidad.y * t;
        posicion.x = posicion.x + dX;
        posicion.y = posicion.y + dY;
    }

    private:
    Vector2d posicion; 
    Vector2d velocidad; 
};