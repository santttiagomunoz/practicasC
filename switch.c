#include <stdio.h>

int main(){

    int casos;
    printf("ingresa un numero: ");
    scanf("%d", casos);
    switch (casos)
    {
    case 1: 
    printf("primer caso");        
        break;
    case 2: printf("segundo caso");
    break;
    
    default: printf("no eligiste ni 1 ni 2");
        break;
    }
}