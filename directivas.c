#include <stdio.h> /*de esta forma el preprocesador busca en la libreria*/
/*#include "nombre del archivo" -> de esta forma el preprocesador busca en la carpeta donde esta el arvchivo .out*/
#define PI  3.14159 
#define CUBO(b) b*b*b

int main(){

    int suma;
    int a = 4;
    suma = PI + 3;
    printf("el cubo de a es: %i\n",CUBO(a));
    printf("la suma es: %i\n", suma);
    return 0;
}