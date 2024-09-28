#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t padrePid = getpid();
    for(int i = 0; i < 15; i++) {
        if(getpid() == padrePid) {
            pid_t hijo = fork();
            if(hijo == 0) {
                printf("Hola %d\n", getpid());
            }
        }
    }
}
