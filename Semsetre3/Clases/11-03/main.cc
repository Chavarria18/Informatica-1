#include "vector.hh"
#include<stdio.h>

int main(){

    Vector v(5); 

    v[3] = 42;
    double x = v[3]; 

    if(v[3]<50){
        Vector v2(6);
        v2[3] = 3; 

    }

    printf("El valor es %f\n", x);



}