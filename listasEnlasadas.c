#include <stdio.h>
#include <stdlib.h>

/*las listas enlasadas son una coleccion de estructuras autorefenciadas
llamadas nodos, se pueden guardar y modificar datos en tiempo de ejcucion
y no es necesario definir cuantos espacios va a tener la lista
una estructura autorefenciada contiee un miembro apuntador que 
apunta a una estructura del mismo tipo
Un nodo es una estructura que se crea con memoria dinamica
typedef permite crear sinomimos para las estructuras
git token 
*/

typedef struct nodo
{
     char *nombre;
     struct nodo *sig;     
     
}Libro;

Libro *listaLibro(Libro *Lista){
    Lista = NULL;
    return Lista;
}

Libro *agregarLibro(Libro *Lista, char *nombre)
{
    Libro *nuevoLibro;
    nuevoLibro = (Libro*) malloc(sizeof(Libro));
    nuevoLibro->nombre = nombre;
    nuevoLibro->sig = NULL;
    if(Lista == NULL){
        Lista = nuevoLibro;
    }else{

    }
    return Lista;
}

int main(){

    int n;
    Libro libro1;
    Libro *Lista = listaLibro(Lista);
    Lista = agregarLibro(Lista, "hablando de c");    
    printf("%s", Lista->nombre);
    printf("%lu", sizeof(libro1));
    return 0;
}