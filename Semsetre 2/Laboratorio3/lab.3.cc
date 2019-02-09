#include <iostream>
using namespace std; 

int main(){

char p;
float g = 0.0;
float k = 0.0;
int t = 0;
int t2 = 0;



cout<<"Ingrese un cáracter:\n";
std::cin >> p;

switch(p){
    case 't':
    g = 9.8;
    k = 0.0023;
    
    printf("Ingrese el tiempo de caida libre");
    cin >> t;
    for(int t=0; t <= t2; t += 0.1)
        {
            float fatm = k*0;
            float f = g - fatm;
            float a = f ;
            float v = g * t;
            float d = v * t; 

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
    




