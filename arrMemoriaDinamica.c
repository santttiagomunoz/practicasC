#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define length 2
int size;
struct dog
{
    char nombre[20];
    char *P_nombre;
}dogs[length];

int main()
{
    for (int i = 0; i < length; i++)    
    {
        printf("ingrese el nombre del perro: \n");
        scanf("%s", dogs[i].nombre);
        //en lugar de scanf puede usarse gets(dogs[i].nombre) que solo recibe un parametro
        //o fgets(dogs[i].nombre, 20, stdin) fget()recibe tres parametros
        size = strlen(dogs[i].nombre);
        printf("%i\n", size);
        //se asigna memoria al puntero P_nombre
        dogs[i].P_nombre = malloc(size * sizeof(char));

        if(NULL == dogs[i].P_nombre){
            printf("error al asignar memoria\n");
        }else{
            printf("se asigo memoria\n");
 //permite copiar lo que esta el dogs[i].nombre en el puntero dogs[i].P_nombre
            strcpy(dogs[i].P_nombre, dogs[i].nombre);
            //free(dogs->P_nombre);
        }
    }

    for (int i = 0; i < length; i++)
    {
        printf("el nombre del perro %i es: %s\n", i + 1, dogs[i].P_nombre);
    }
    
    return 0;
    
}