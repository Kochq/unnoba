#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        sleep(20);
        printf("Soy el hijo %d\n", getpid());
    } 

    printf("Proceso termino %d\n", getpid());
    wait(NULL);

    return 0;
}
