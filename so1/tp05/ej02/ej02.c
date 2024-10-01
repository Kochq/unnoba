#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {

    for(int i = 0; i < 3; i++) {
        if(fork() == 0) {
            if(i == 0) {
                if(fork() == 0) {
                    fork();
                }
            }
            break;
        }
    }


    printf("PID: %d, mi padre es: %d\n", getpid(), getppid());
    wait(NULL);
    return 0;
}
