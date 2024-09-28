#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main() {
    pid_t hijo;
    if((hijo=fork())<0) {
        perror("Error!\n");
        exit(EXIT_FAILURE);
    }
    if(hijo==0) {
        execv("./mipid", NULL);
        perror("Error!\n");
        exit(EXIT_FAILURE);
    }
    printf("Fin!\n");
}
