//dos numeros y determine cual es mayor

#include<iostream>
using namespace std;


int main(){
    
    int n1,n2,n3;
    printf("Digite tres numeros\n");
    cin >> n1;
    cin >> n2;
    cin >> n3;

    if(n1 == n2 && n2 == n3){
        printf("los numeros son iguales"); 

    }
    else if(n1 > n2 && n2> n3){
        printf("%i es el mayor de los tres numeros ",n1); 



    }
    else if(n2 > n1 && n1 > n3){
        printf("%i es el mayor de los tres numeros ",n2);
    
    }
    else {
        printf("%i es el mayor de los tres numeros ",n3);
    
    }


    return 0; 

}


