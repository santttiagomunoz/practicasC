/*asignacion de memoria dinamica*/

/*la memoria estatica es la que se realiza
en tiempo de compilacion
la memoria dinamica es la que se realiza en 
tiempo de ejecucion
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    //siempre usar numeros positivos para asignar memoria
    int n = 10;
    char * p;
    p = malloc(n*sizeof(char));

    if(p == NULL){
        printf("error al asignar memoria");
    }else{
        printf("se agino memoria");
    }

    return 0;
}