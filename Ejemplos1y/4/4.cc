//operaciones aritmeticas


#include<iostream>
using namespace std;

int main(){
    cout<<"Ingrese dos numeros \n";
    int numero1;
    int numero2;
    cin>>numero1;
    cin>>numero2;

    int suma = numero1 + numero2;
    int resta = numero1 - numero2;
    int m = numero1 * numero2;
    int d = numero1 % numero2;

    printf("Suma:%i,resta:%i,multiplicacion:%i,division:%i\n",suma, resta, m,d);
    

    return 0; 

}
