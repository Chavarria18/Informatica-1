#include<iostream>
using namespace std;

int main(){
    cout<<"Ingrese el precio del  producto \n";
    int numero1;
    cin>>numero1;

    float iva = numero1 *0.12;
    float total = iva + numero1;

    printf("el precio del producto con iva es de:%.2f\n",total);
    

    return 0; 

}
