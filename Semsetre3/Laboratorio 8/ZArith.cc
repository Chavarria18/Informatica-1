#include "ZArith.hh"

ZArith::ZArith(int _base): _base(_base){}


bool ZArith::parse(const std::string valor, int& resultado)const{
   



}//este es el que falta 


int ZArith::opSuma(const int arg1, const int arg2)const{

    int suma = (arg1 + arg2)%_base; 

    return suma; 

}

int ZArith::opProducto(const int arg1, const int arg2)const{

    int multiplicacion = (arg1 * arg2)%_base; 

    return multiplicacion; 

}

int main(){}