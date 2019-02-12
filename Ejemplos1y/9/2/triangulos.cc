#include<iostream>
using namespace std;
#include <math.h>



int main(){
    
    float x,y,c; 

    printf("Digite el primer cateto:\n"); 
    cin >> x;
    printf("Digite el segundo cateto\n"); 
    cin >> y;

    c = (pow(x,2))+(pow(y,2));
    
    float h = (sqrt(c)); 

    
    printf("La hipotenusa es :%f\n" ,h); 



    return 0;



}