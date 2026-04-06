#include <stdio.h>
//una estructura es una coleccion de uno o mas tipos de elementos denominados miembros
//para crear una estructura se usa la palabra reservada struct

struct perro
{
    char nombre[30];
    int edadMeses;
    float peso;
}perro1={"pacho", 10, 4.5}, 
perro2={"salo", 45, 2.8};

int main ()
{
    printf("el nombre del perro es: %s \n", perro1.nombre);
    printf("la edad del perro en meses es: %i", perro1.edadMeses);
    printf("el peso del perro es: %.2f kg\n", perro1.peso);
    return 0;
}