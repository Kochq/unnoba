#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid1, pid2, pid3, pid4, pid5;

    pid1 = fork();
    if(pid1 == 0) {
        pid4 = fork();
        if(pid4 == 0) {
            pid5 = fork();
        }
    } else {
        pid2 = fork();
        if(pid2 != 0) {
            pid3 = fork();
        }
    }

    printf("Tengo este PID: %d, Este es mi padre: %d\n", getpid(), getppid());
    wait(NULL);
    return 0;
}
