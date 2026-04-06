#include <stdio.h>
long Factorial(long numero);
int main(){

    int numero;
    printf("ingresa u numero: ");
    scanf("%i", &numero);
    //para ejecutar una funcion recurciva se requiere un bucle
    for(int i = 0 ; i <= numero; i++){
        printf("%ld\n", Factorial(i));
    }

    return 0;

}

long Factorial(long n){

    // las funciones recursivas siempre debe tener un caso base
    //de lo contrario se quedara en loop
    if(n <= 1){
        return 1;
    }
    else{
        return(n * Factorial(n-1));
    }
    
}