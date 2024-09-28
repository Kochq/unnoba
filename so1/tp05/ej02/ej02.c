#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pidP = getpid();
    pid_t pid1;

    int i = 0;
    for(; i < 3; i++) {
        pid1 = fork();
        if(pid1 == 0) {
            break;
        }
    }

    if(i == 0) {
        int pid = fork();
        if(pid == 0) {
            int pid4 = fork();
        }
    }

    printf("PID: %d, mi padre es: %d\n", getpid(), getppid());
    wait(NULL);
    return 0;
}
