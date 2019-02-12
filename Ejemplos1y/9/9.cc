//ejercicio 30 60 10 
#include<iostream>
using namespace std;


int main(){
    
    float p,t,ps; 
    printf("Digite la nota de practicas alumno:\n"); 
    cin >> p;
    printf("Digite la nota teorica del alumno alumno:\n"); 
    cin >> t;
    printf("Digite la nota de participacion del alumno:\n"); 
    cin >> ps;

    
    float promedio = ((p*.30)+(t*0.6)+(ps*.1));

    
   


    printf("El promedio de las notas es:%.2f\n" ,promedio); 






    return 0;



}