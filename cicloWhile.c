#include <stdio.h>

int main(){

    int counter = 0;
    while (counter < 5)
    {
        //no olvidar incrementar el counter para no explotar el computador
        printf("%d", counter);
        counter++;
    }
    

    return 0;

}
