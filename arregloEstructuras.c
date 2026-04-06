#include <stdio.h>

struct perro
{
    char nombre[30];
    int edad;
    float peso;
}perro[3];
/*nota: tener cuidado con el desbordamiento del buffer
ej: si pongo perro[3] pero en el ciclo no defino bien el limite
(en este caso 3) y pongo un valor que no coincida con el limite del 
arreglo, los datos pueden invadir memoria que no le corresponda
*/
int main()
{
    for(int i = 0; i < 3; i ++){
        printf("ingresa el nombre del perro %i: \n", i + 1);
        scanf("%s", perro[i].nombre);
        printf("ingresa la edad del perro %i: \n", i + 1);
        scanf("%i", &perro[i].edad);
        printf("ingresa el peso del perro %i: \n", i + 1);
        scanf("%f", &perro[i].peso);        
    }

    for (int i = 0; i < 3; i++)
    {
        printf("el nombre del perro %i es : %s \n", i + 1,perro[i].nombre);
        printf("la edad del perro %i en meses es: %i \n", i + 1,perro[i].edad);
        printf("el peso del perro %i es: %.2f kg \n", i + 1, perro[i].peso);
    }
    
    return 0;
}
