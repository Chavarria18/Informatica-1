#include "Arith.hh"


bool Arith::parse(const std::string valor, int& resultado)const{
   
    int tam = valor.size();
    int i = 0;
    for(int i = 0; i < tam; i++)
    {
        if(valor[i] < '0' || valor[i] > '9'){
            
            if (i == ( tam - 1 )){
                resultado = std::stoi( valor ); 
            return true;
            }
        }else{
            return false;
        }
        
    }
    return false;
}


 


int Arith::opSuma(const int arg1, const int arg2)const{

    int suma = arg1 + arg2; 

    return suma; 

}

int Arith::opProducto(const int arg1, const int arg2)const{

    int multiplicacion = arg1 * arg2; 

    return multiplicacion; 

}

//int main(){ }





