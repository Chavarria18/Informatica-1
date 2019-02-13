#include<iostream>

int main(){

    int a = 4;
    int& b = a;
    a = 5;
    b = a + a;

    printf("el valor de a: %i",a);

}