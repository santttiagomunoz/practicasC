/*los apuntadores son variables cuyos valores son 
direcciones de memoria*/
#include <stdio.h>

int main(){

    int a = 2;
    int *apt = &a;
    printf("%p\n", apt);
    return 0;
}