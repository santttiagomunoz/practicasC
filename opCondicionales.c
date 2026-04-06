#include <stdio.h>

int main(){

    int edad;
    printf("ingrese la edad: ");
    scanf("%d", &edad);
    if(edad > 18){
        printf("la persona es mayor de edad");
    }else{
        printf("la persona es menor de edad");
    }
    return 0;
}