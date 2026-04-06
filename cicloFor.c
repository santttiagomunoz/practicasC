#include <stdio.h>

int main(){

    int count;
    for (count = 0; count <= 10;count++)
    {
       // forma incorrecta printf("%d","%d", count, count * 2);
       printf("%d x 2 = %d\n", count, count * 2);
    }
    return 0;
}