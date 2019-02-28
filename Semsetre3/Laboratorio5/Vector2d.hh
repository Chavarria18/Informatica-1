#pragma once
#include <sstream> 
#include <string>



class Vector2d{

    public:
    Vector2d(const float x, const float y);
    Vector2d operator+(const Vector2d& otro) const;
    //Vector2d operator/(const Vector2d& otro) const;
    float getX() const;
    float getY() const;
    const std::string to_string() const;

    void Tostring(); 
    void getVelocidad();
    void getPosicion(); 
    void Acelerar(); 
    

   
    const float x;
    const float y;
    

    

    }; 

