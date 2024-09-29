# Comandos basicos para linux

# Index
* [Section 1](#Otra-parte)

## ls: List directory contents
Lista los directorios del directorio actual `ls`. O del directorio que pases como argumento `ls /path/directory`.
    - `-l` Muestra los archivos y directorios en formato largo.
    - `-a` Muestra todos los archivos, incluyendo los ocultos.

## cat: Muestra el contenido de un archivo.
Muestra el contenido de un archivo `cat /path/file`. Si el archivo es muy grande, se puede usar `more` o `less` para paginar el contenido.

## cd: Change directory
Cambia de directorio. Si no se pasa argumento `cd /path/directory`, se va al directorio home. Tambien se puede usar `cd ..` para ir al directorio padre.
## pwd: Imprime el directorio actual.
`pwd`

## touch: Crea un archivo.
Crea un archivo con el nombre que pases como argumento `touch archivo.txt`.

## mkdir: Make directory.
Crea un directorio con el nombre que pases como argumento `mkdir directory`.

## rm: Remove.
Elimina el archivo que pases como argumento `rm /path/file`.
Tambien puede eliminar directorios con el argumento `-r` `rm -r /path/directory`.

## rmdir: Remove directory
Elimina el directorio que pases como argumento `rmdir /path/directory` solo si esta vacio.

## mv: Move Directories/Files
Mueve el archivo o directorio que pases como primer argumento al directorio que pases como segundo argumento `mv /path/file /path/directory`.
Tambien se puede usar para renombrar archivos `mv /path/file /path/newNameFile`.

## cp: Copy
Copia el archivo o directorio que pases como primer argumento al directorio que pases como segundo argumento `cp /path/file /path/directory`.

## grep: Search
Busca una cadena de texto en un archivo `grep "cadena" /path/file`.

## pgrep: Process grep
Busca un proceso por su nombre `pgrep nombreProceso`.

## man: Manual
Muestra el manual de un comando `man comando`.

## chmod: Change mode
Cambia los permisos de un archivo o directorio `chmod 777 /path/file`.

## chown: Change owner
Cambia el propietario de un archivo o directorio `chown user /path/file`.

## ps: Process Status
Muestra los procesos que se estan ejecutando `ps`.

## kill: Kill
Mata un proceso `kill PID`.

## killall: Kill all
Mata todos los procesos que tengan el nombre que pases como argumento `killall nombreProceso`.

## top: Top
Muestra los procesos que se estan ejecutando en tiempo real `top`.

## help: Help
Muestra la ayuda de un comando `comando --help`.

## sort: Sort
Ordena las lineas de un archivo `sort /path/file`.

## nice: Nice
Ejecuta un comando con una prioridad `nice -n 10 comando`.

## whatis: What is
Muestra una breve descripcion de un comando `whatis comando`.

## whereis: Where is
Muestra la ubicacion de un comando `whereis comando`.

## apropos: Apropos
Busca comandos por palabras clave `apropos palabraClave`.

## tar: Tape Archive
Crea un archivo comprimido `tar -cvf archivo.tar /path/directory`.

## adduser: Add user
Agrega un usuario al sistema `adduser nombreUsuario`.
Va a promptear para agregar la contraseña y otros datos del usuario.

## userdel: Delete user
Elimina un usuario del sistema `userdel nombreUsuario`.

## addgroup: Add group
Agrega un grupo al sistema `addgroup nombreGrupo`.

## delgroup: Delete group
Elimina un grupo del sistema `delgroup nombreGrupo`.

## usermod: Modify user
Modifica un usuario `usermod -option nombreUsuario`.
Agrega al usuario de argumento al grupo del argumento `usermod -aG nombreGrupo nombreUsuario`.

## passwd: Password
Cambia la contraseña de un usuario `passwd nombreUsuario`.

## su: Switch User
Cambia al usuario que pases como argumento `su nombreUsuario`.
Cambias al usuario root `sudo su`.

## sudo: Super User Do
Ejecuta un comando como root `sudo comando`.

# Otra parte

## Pipes: |
Permite redirigir la salida de un comando como entrada a otro comando `comando1 | comando2`.

## Redireccion de salida: >
Redirige la salida de un comando a un archivo `comando > archivo`.
Tambien podemos usar `>>` para agregar la salida al final del archivo, de esta forma no sobreescribimos el contenido.

# Enlaces

## ln -s: Link simbolico
Crea un enlace simbolico a un archivo o directorio `ln -s /path/file /path/link`.
Un enlace simbolico es un acceso directo al archivo o directorio. Si se elimina el archivo o directorio original, el enlace simbolico no va a funcionar.

## ln: Link
Crea un enlace a un archivo o directorio `ln /path/file /path/link`.
Un enlace es una copia del archivo o directorio original. Si se elimina el archivo o directorio original, el enlace va a seguir funcionando.

# Red

## ssh: Secure Shell
Conecta a un servidor remoto `ssh user@host`. Donde user el el nombre de usuario al que nos conectaremos en el host, y host es la direccion ip o el nombre del host.

## scp: Secure Copy
Copia archivos de un servidor remoto `scp user@host:/path/file /path/local`.
Tambien se puede copiar archivos locales a un servidor remoto `scp /path/file user@host:/path/remote`.

## telnet: Telnet
Conecta a un servidor remoto `telnet host port`. Donde host es la direccion ip o el nombre del host, y port es el puerto al que nos conectaremos.
