#include "Vector2d.hh"
#include "Vehiculo.hh"
#include <iostream>
#include <sstream>
#include<string> 
using namespace std; 




Vector2d::Vector2d(const float _x, const float _y) : x(_x), y(_y) {}





//Tarea 1 
int main(){
    /*int f, z;
    cin >> f;
    cin >> z; */ 

    std::stringstream Vector2d;
    Vector2d << "{x:" << 5 << ",y:" << 6 << "}";
    std::string s = Vector2d.str();
    printf(s.c_str());

}