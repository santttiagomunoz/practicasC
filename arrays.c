#include <stdio.h>

int main(){
    //recordar: se empieza desde 0
    int arreglo[4] = {30, 23, 89, 88};
    printf("posicion 2 primer arreglo: %d\n", arreglo[2]);

    int n;
    //si creas un arreglo vacio en c luego no puedes asignarle el u nuevo valor
    //int arreglo2[] = {};
    printf("ingresa el tamao del array: ");
    scanf("%d", &n);
    int arreglo2[n];
    
    for(int i = 0; i < n; i++){
        printf("ingrese el valor %i: ", i+1);
        scanf("%i", &arreglo2[i]);
    }
    
    for(int i = 0; i < n; i++){
        printf("los valores son: %i\n", arreglo2[i]);
    }

    return 0;
}