#include<iostream>
#include<math.h>
using namespace std;


int main(){
    float a,b,c,resultado, resultado2 = 0;
    printf("Digite a:");cin>>a;
    printf("Digite b:");cin>>b;
    printf("Digite c:");cin>>c;
    
    float arriba1 = -b + (sqrt((pow(b,2))-(4*a*c)));
    float arriba2 = -b - (sqrt((pow(b,2))-(4*a*c)));

    resultado = (arriba1)/(2*a);
    resultado2 =(arriba2)/(2*a);


    printf("El resultado es %.2f, %.2f\n",resultado, resultado2);



    return 0;


}