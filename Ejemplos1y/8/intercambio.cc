#include<iostream>
using namespace std;


int main(){
    
    int x ;
    int y ;
    int aux; 
    printf("Digite un numero:\n"); 
    cin >> x;
    printf("Digite un segundo:\n"); 
    cin >> y;
    
    aux = x;
    x = y;
    y = aux;


    printf("Los numeros son %i, %i ",x,y); 







    return 0;



}