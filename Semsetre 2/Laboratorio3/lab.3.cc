#include <iostream>
using namespace std; 
#include<math.h>

int main(){

char p;
float g = 0.0;
float k = 0.0;
float t = 0;
float t2 = 0;
int vo = 0; //velocidad original


cout<<"Ingrese un cáracter:\n";
std::cin >> p;

switch(p){
    case 't':
    g = 9.8;
    k = 0.0023;
    
    printf("La gravedad es: %.2f, la resustencia del viento es: %.4f\n", g ,k);
   
    
    printf("Ingrese el tiempo de caida libre");
    cin >> t2;
    while(t2 >= t ){
        float fatm = k * (pow(vo,2));
        float f = g - fatm;
        float a = f ;
        float v = a * t;
        float d = v * t;
        t += 0.01;
        printf("La distancia es %.2f , la velocidad es %.2f ",v ,d);


    }
    
   
    
    break;










    case 'v':
    g = 8.87;
    k = 0.0023;
    
    break;
    
    case 'l':
    g = 1.62;
    k = 0.0;

    
    break;
    
    case 'c':
    g = 1.23;
    k = 0.0;
   
    break;

    default: cout << "El planeta no esta en la base de datos";

    }

printf("%f , %f\n", g, k);

return 0; 

}
    




