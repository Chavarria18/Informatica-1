#include <iostream>

int main(){
    int valor1 = 1;
    int valor2 = 1;

    int resultado = ++valor1 + valor2++;

    std::printf("valor1: %i, valor2: %i, resultado: %i\n", valor1, valor2, resultado);
}
//Porque en el caso de ++valor1 primero hace la operacion le suma 1, 
//cuando al  valor2++ primero toma el valor y no toma en cuenta el ++
//Esto se da por el manejo de los espacios en memoria