#include<iostream>
#include "vector"
#include <stdio.h>

int main(){
    int mapContador = 0; 
    int map[20][21] = {
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,1,3,1,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,1,0,1,1,1,1,0,0,0,0,0,0,
            0,0,0,0,0,0,0,1,1,1,2,0,2,3,1,0,0,0,0,0,0,
            0,0,0,0,0,0,0,1,3,0,2,4,1,1,1,0,0,0,0,0,0,
            0,0,0,0,0,0,0,1,1,1,1,2,1,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,1,3,1,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0


    };


for(int i = 0; i < 20; i++){
    for(int j = 0; j < 20; j++){
        if(mapContador == 20){
            std::cout<< "A"<< std::endl; //columna
            mapContador = 0; 
        }
        if(map[i][j]){
            std::cout << " ";
            
        }else if (map[i][j]==0){
            std::cout <<"A";
            
        }else if (map[i][j]==2){
            std::cout <<" ";}
            mapContador++;

    }


}

return 0;


}

