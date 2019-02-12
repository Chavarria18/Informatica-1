#include<iostream>
using namespace std;


int main(){
    float a,b,c,d,e,f, resultado = 0;
    printf("digita el valor de a:");
    cin>>a;
    printf("digita el valor de b:");
    cin>>b;
    printf("digita el valor de c:");
    cin>>c;
    printf("digita el valor de d:");
    cin>>d;
    printf("digita el valor de e:");
    cin>>e;
    printf("digita el valor de f:");
    cin>>f;




    resultado = (a+(b/c))/(d+(e/f));

   
    printf("El valor del reslutado es: %.2f\n",resultado);
    






    return 0;



}