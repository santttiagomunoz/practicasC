#include <stdio.h>

int suma(int n1, int n2);
int n = 3;
int main(){
    int n1, n2;
    printf("Ingrese el primer valor: \n");
    scanf("%i", &n1);

    printf("ingrese el segudo valor: \n");
    scanf("%i", &n2);

    printf("%i", suma(n1, n2));
    return 0;
}

int suma(int n1, int n2){

    int suma = n1 + n2;
    return suma;
}