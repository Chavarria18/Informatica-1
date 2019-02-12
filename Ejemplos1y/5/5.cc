//datos de usuario : edad, sexo, altura


#include<iostream>
using namespace std;


int main(){

    int edad;
    char sexo[10];
    float altura;

    cout<<"Ingrese los siguientes datos:\n";
    cout<<"Ingrese su edad:"; cin>>edad;
    cout<<"Ingrese su sexo:"; cin>>sexo;
    cout<<"Ingrese su altura:"; cin>>altura;


    printf("Edad:%i\nSexo:%s\nAltura:%.2f\n",edad,sexo,altura);
    


    
    






    return 0;
}


