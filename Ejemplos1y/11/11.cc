//if 

#include<iostream>
using namespace std;

int main(){
    int numero, dato = 5;
    printf("Digite un numero:\n");
    cin >> numero; 

    if(numero != dato){
        printf("el numero no es 5");
    }
    else{//condicional doble
        printf("el numero es 5");
    }


    return 0; 
}