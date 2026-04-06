#include <stdio.h>
int suma();
//las funciones siempre se deben declarar en la parte de arriva para que c las reconozca
void saluddo(){
    printf("hola moderfuckers");
    // este return sirve para retornar el valor de una funcion
    return;
}

int main(){
    saluddo();
    return 0;
}

int suma(){
    int n1=12, n2=4;
    int suma = n1 + n2;
    return suma;
}