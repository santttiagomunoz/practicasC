#include <stdio.h>
#include <unistd.h> // Librería fundamental para fork()
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t id;
    id = fork();
    if(id == 0){

        printf("yo soy el hijo\n");
        _exit(0);        
    }
    wait(NULL);
    printf("continua el padre\n");
    return 0;
}