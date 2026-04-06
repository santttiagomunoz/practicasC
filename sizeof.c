#include <stdio.h>
//sizeof no es una funcion, es un operador unario
size_t getsize(float *ptr);
int main(){

    float array[20];
    // imprime 80 porque 20 elementos X cantidad de bytes del tipo de dato
    printf("el numero de bytes en el arreglo es: %lu \n", sizeof(array));
    printf("el numero de bytes devueltos por getsize es: %lu\n", getsize(array));
    return 0;

}

size_t  getsize(float *ptr){
    return sizeof(ptr);
}
//sizeof me dice el tamano del arreglo
//getsize me dice el tamano de la direccion de memoria