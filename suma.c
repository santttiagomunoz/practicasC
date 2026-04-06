#include <stdio.h>

int main(){
    int n1;
    int n2;

    int resultado;

    printf("igrese el primer valor: \n");
    scanf("%d", &n1);
    printf("ingrese el segudo valor: \n");
    scanf("%d", &n2);

    resultado = n1 + n2;
    printf("resultado es: %d \n" , resultado);
    return 0;
}