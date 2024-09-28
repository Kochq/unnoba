#include <stdio.h>
#include <unistd.h>

void forkexample()
{
    int x = 1;
    if (fork() == 0)
        printf("HIJO - x = %d\n", ++x);
    else
        printf("PADRE - x = %d\n", --x);
}
int main()
{
    forkexample();
    return 0;
}
