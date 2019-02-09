#include <iostream>
using namespace std; 

int factores(int num, int array[])
{
    for(int i = 1; i < num; i++)
    {
        if (num%i==0) {
            array[i-1]=i;
        }
    }
    
}


int main(){
    int num;
    printf("ingrese el numero ese: \n");
    cin>>num;
    int factores2 [num];
    factores(num, factores2);
}