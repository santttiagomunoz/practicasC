#include <stdio.h>
void cubo(int *n);
int cubo2(int n);
int main(){

    int num = 5;
    printf("valor original %i", num);
    cubo(&num);
    printf("nuevo valor%i\n", num);
    return 0;
}

//llamada por referencia
void cubo(int *n){     
    *n = *n * *n * *n;
}
//llamada por valor
int cubo2(int n){
    return n * n * n;
}