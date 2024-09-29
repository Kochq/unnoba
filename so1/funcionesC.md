# Funciones en C

## fork: Crea un proceso hijo.
Crea un proceso hijo que es una copia exacta del proceso padre.

```c
#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();
    if (pid == 0) {
        printf("Soy el proceso hijo\n");
    } else {
        printf("Soy el proceso padre\n");
    }
    return 0;
}

```
##### Salida:
```
Soy el proceso padre
Soy el proceso hijo
```

## execv: Reemplaza la imagen del proceso.
Reemplaza la imagen del proceso actual con una nueva imagen.
```c
#include <stdio.h>
#include <unistd.h>

int main() {
    printf("Soy el proceso padre\n");
    char *args[] = {"ls", "-l", NULL};
    execv("otroPrograma", args); // args: argumentos que necesita el otro programa
    printf("Esta linea no se ejecuta\n");
    return 0;
}
```

##### Salida:
```
// Si el otroPrograma tiene salida, se mostrara aqui.
```

## wait: Espera a que un proceso hijo termine.
Espera a que un proceso hijo termine.

```c
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();
    if (pid == 0) {
        printf("Soy el proceso hijo\n");
    } else {
        wait(NULL);
        printf("Soy el proceso padre\n");
    }
    return 0;
}
```

##### Salida:
```
Soy el proceso hijo
Soy el proceso padre
```

## getpid(): Obtiene el ID del proceso actual.
Obtiene el ID del proceso actual.

```c
#include <stdio.h>
#include <unistd.h>

int main() {
    printf("El ID del proceso actual es: %d\n", getpid());
    return 0;
}
```
##### Salida:
```
El ID del proceso actual es: 1234
```

## getppid(): Obtiene el ID del proceso padre.
Obtiene el ID del proceso padre.

```c
#include <stdio.h>
#include <unistd.h>

int main() {
    printf("El ID del proceso padre es: %d\n", getppid());
    return 0;
}
```
##### Salida:
```
El ID del proceso padre es: 1234
```

