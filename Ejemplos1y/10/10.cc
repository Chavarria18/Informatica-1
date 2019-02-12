#include<iostream>
#include<math.h>
using namespace std;


int main(){
    float x, y, resultado = 0;
    printf("Digite x");cin>>x;
    printf("Digite y");cin>>y;

    resultado = (sqrt(x))/((pow(y,2))-1);


    printf("El resultado es %.2f\n",resultado);



    return 0;


}