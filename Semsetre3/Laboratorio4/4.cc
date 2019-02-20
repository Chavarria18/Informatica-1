#include <iostream>

using namespace std;
//Parte 2 


float productoPunto(const float x[], const float y[], int dims){
   float total = 0; 
   float suma = 0; 
   float r= 0; //funciona?
    for(int z = 0; z < dims; z++){
        r= (x[z]*y[z]); 
        total = total + r; 
   
    }
    printf("El producto punto es: %.2f",total);
    return total; 
}



int main(){
   printf("Ingrese la dimension deseada:\n ");
   int dims;
   cin >> dims;
   
   float x1[dims];
   float y1[dims]; 
   //float r[dims];

    printf("Ingrese el primer vector:\n ");
    for(int z=0; z < dims; z++){
        cin>> x1[z];
    }
    printf("Ingrese el segundo  vector:\n  ");
    for(int j=0; j < dims; j++){
        cin>> y1[j];
    }
    productoPunto(x1, y1,dims);
      
 
    

}

