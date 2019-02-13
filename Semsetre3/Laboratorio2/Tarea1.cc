#include <iostream>

int main(){
    
    int E = 5; // int porque es una cantidad entera 
    E += 3;
    float Salario = 110.50; // es una cantidad con decimales por lo que se usa float
    float SueldoTotal = E * Salario; // es una cantidad con decimales por lo que se usa float
    float Tazaimpuesto = 0.1;// es una cantidad con decimales por lo que se usa float 
    float ImpuestoEmpres = Tazaimpuesto * SueldoTotal;// es una cantidad con decimales por lo que se usa float
    

    
     std::printf("Sueldo total: %f , empleados: %i \n", SueldoTotal, E);
     std::printf("Impuestos totales: %f " ,ImpuestoEmpres);
    return 0; 
}
