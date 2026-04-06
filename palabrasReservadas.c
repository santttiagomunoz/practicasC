#include <stdio.h>

int main(){
    /*
    int a = 23;
    printf("enterp%i\n flotate%.2f\n double %.3f\n caracter%c\n", a, (float)a, (double)a, (char)a);*/
    //si cambiamos a = 23 por a = 80 entonces si imprimiria un caracter por 80 = p en sistema acssi

    //podemos convetir el resultado de una suma entre un entero y un float a solo float o a solo entero
    int a = 80; 
    float f = 45.3;
    float suma = (float)a + f;
    printf("resultado: %.2f", suma);
    return 0;
}