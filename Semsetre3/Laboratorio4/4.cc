#include <iostream>
#include<math.h>
using namespace std;
//Parte 2 


void vP(const float x[], const float y[], int dims){
   float r[]={}; 
    for(int z = 0; z < dims; z++){
        r[z]= (x[z]*y[z]); 
    //return 0.0; 
}
}

int main(){
   printf("Ingrese la dimension deseada:\n ");
   int dims;
   cin >> dims;
 
   
   float x[dims];
   float y[dims]; 
   float r[dims];

    printf("Ingrese el primer vecotor:\n ");
    for(int z=0; z < dims; z++){
        cin>> x[z];
    }
    printf("Ingrese el segundo  vecotor:\n  ");
    for(int z=0; z < dims; z++){
        cin>> x[z];
    }
    int suma = 0; 

    vP(x, y, dims);
    printf("El resultado es:\n  ");

 
    

}