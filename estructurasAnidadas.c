#include <stdio.h>

#define length 2

struct owner
{
    char nombre[20];
    char direccion[30];
};
struct dog
{
    char nombre[20];
    int edadMeses;
    struct owner ownerDog;
    
}dogs[length];
int main(){

    for (int i = 0; i < length; i++)
    {
        printf("nombre del perro:\n");
        scanf("%s", dogs[i].nombre);
        printf("edad del perro en meses:\n");
        scanf("%i", &dogs[i].edadMeses);
        printf("nombre del propietario:\n");
        scanf("%s", dogs[i].ownerDog.nombre);
        printf("direccion del propietario: \n");
        scanf("%s", dogs[i].ownerDog.direccion);
    }

    for (int i = 0; i < length; i++)
    {
        printf("el nombre del perro %i es: %s\n", i + 1, dogs[i].nombre);
        printf("la edad del perro %i es: %i\n", i + 1, dogs[i].edadMeses);
        printf("el nombre del propietario del perro %i es: %s\n", i + 1, dogs[i].ownerDog.nombre);
        printf("la direccion del propietario del perro %i es: %s\n", i + 1, dogs[i].ownerDog.direccion);
    }
    
    
    return 0;
}