# Comandos

## ls: List directory contents
Lista los directorios del directorio actual `ls`. O del directorio que pases como argumento `ls /path/directory`.

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
