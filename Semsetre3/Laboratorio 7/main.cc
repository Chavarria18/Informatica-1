#include "Figura.hh"
#include "Circulo.hh"
#include "rectangulo.hh"
#include<iostream>
using namespace std; 

void const  abarcar(Figura& figura, Vector2d[] puntos, int cantidad){}

int main(){

    
    printf("escoja un caracter: v , c ó r \n"); 
    char eleccion; 
    cin>>eleccion; 


    switch (eleccion)
    {
        case 'v' :
        printf("Ingrese el vector deseado x , y: "); 
        int x , y; 
        Vector2d(x ,y);
        cin >> x; 
        cin >> y; 
  
            break;

        case 'c' :
        printf("Ingrese el centro del circulo deseado x , y: \n");
        int x , y;  
        Vector2d(x ,y);
        printf("Ingrese su radio r : \n"); 
        int r;   
        Figura Circulo; 
        Circulo.area();
       
   
      /*case 'r' :
        int x , y; 
        Vector2d coordenadas; 
        */ 
     

            break;
    
        default:
            break;
    }

return 0; 
}