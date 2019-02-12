#include<iostream>
using namespace std;


int main(){
    
    float a,b,c,d; 
    printf("Digite la nota del primer alumno:\n"); 
    cin >> a;
    printf("Digite la nota del segundo alumno:\n"); 
    cin >> b;
    printf("Digite la nota del tercer alumno:\n"); 
    cin >> c;
    printf("Digite la nota del cuarto alumno:\n"); 
    cin >> d;

    int totalA = 4; 

    float promedio = (a+c+d+b)/totalA;

    
   


    printf("El promedio de las notas es:%.2f,\n" ,promedio); 






    return 0;



}