#include <iostream>
using namespace std;

int main(){
    int n; 
    int numero , cont = 0; 
    cout << "escriba el numero deseado " ;
    cin >> n;
    for(n = 1; n <= numero; n++){
        if(numero%n == 0){
            cont++; 
        }
    }

    if(cont > 2){
        printf("El numero no  es primo");
    }
    else {printf("El numero  es primo");}
    return 0;

}