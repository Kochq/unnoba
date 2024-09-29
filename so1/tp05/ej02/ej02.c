#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t padrePid = getpid();
    printf("hola soy el padre %d\n", getpid());
    for(int i = 0; i < 15; i++) {
        if(getpid() == padrePid) {
            pid_t hijo = fork();
            if(hijo == 0) {
                printf("hola soy el hijo %d papa %d\n", getpid(), getppid());
                wait(NULL);
                exit(0);
            }
        }
    }
    return 0;
}
