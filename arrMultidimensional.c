#include <stdio.h>

int main(){

    //2 filas 3 columnas
    int multi[2][3]={{3,5,6}, {7,6,7}};

    for(int i = 0; i < 2; i++){
        
        for(int j = 0; j < 3; j++){
        printf("%d ", multi[i][j]);    
    }
    printf("\n");
    }

    return 0;
}