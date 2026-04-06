#include <stdio.h>

int main(){
    char C = 'y'; // tamano de 1 byte 0 hasta 255
    int a = 327691; // 2 bytes -32768 hasta 32767
    short b = -2; // 2 bytes -128 hasta 127
    unsigned int u = 25; // 2 bytes 0 hasta 65535
    long l = 5932; // 4 bytes -2147483648 hasta 2147483648 
    float f = 72.534; 
    double d = 12323.877658; // %.2f imprime dos flotantes
    printf("%.3f", a);
    return 0;
}