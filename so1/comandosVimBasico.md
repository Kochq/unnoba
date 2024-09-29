# Modos de vim

## Normal Mode
Es el modo donde vamos a poder ejecutar comandos para movernos por el archivo, buscar, reemplazar, etc.
- Entrar: <kbd>ESC</kbd> o <kbd>Ctrl</kbd> + <kbd>c</kbd>

## Insert Mode
Es el modo donde vamos a poder escribir en el archivo, como en cualquier otro editor
- Entrar: [Ver insertar](#Entrar-en-insert-mode)

## Visual Mode
Es el modo donde vamos a poder seleccionar texto para copiar, cortar, pegar, etc.
- Entrar: [Ver visual](#Entrar-en-visual-mode)

## Command mode (?)
Es el modo donde vamos a poder ejecutar comandos para guardar, salir, etc. [Ver comandos](#Guardar-salir)
- Entrar: <kbd>:</kbd>


# Comandos simples

## Entrar en insert mode
- <kbd>i</kbd>: Insertar texto antes del cursor.
- <kbd>I</kbd>: Insertar texto al inicio de la linea.
- <kbd>a</kbd>: Insertar texto despues del cursor.
- <kbd>A</kbd>: Insertar texto al final de la linea.
- <kbd>o</kbd>: Insertar una nueva linea debajo de la actual.
- <kbd>O</kbd>: Insertar una nueva linea arriba de la actual.

## Entrar en visual mode
- <kbd>v</kbd>: Seleccionar texto.
- <kbd>V</kbd>: Seleccionar linea.

## Movimiento horizontal

### Moverse por el archivo
- <kbd>h</kbd>: Moverse a la izquierda.
- <kbd>l</kbd>: Moverse a la derecha.

### Moverse por palabras

- <kbd>w</kbd>: Moverse al principio de la siguiente palabra.
- <kbd>b</kbd>: Moverse al principio de la palabra anterior.
- <kbd>e</kbd>: Moverse al final de la palabra.

### Moverse por caracteres
- <kbd>f</kbd> + <kbd>caracter</kbd>: Moverse al siguiente caracter.
- <kbd>F</kbd> + <kbd>caracter</kbd>: Moverse al anterior caracter.

## Movimiento vertical

### Moverse por el archivo
- <kbd>j</kbd>: Moverse hacia abajo.
- <kbd>k</kbd>: Moverse hacia arriba.

### Moverse por el archivo
- <kbd>gg</kbd>: Moverse al inicio del archivo.
- <kbd>G</kbd>: Moverse al final del archivo.

### Moverse por parrafos
- <kbd>}</kbd>: Moverse al final parrafo.
- <kbd>{</kbd>: Moverse al inicio anterior.

### Moverse por ( ) { } [ ]
- <kbd>%</kbd>: Moverse al parentesis, llave o corchete correspondiente.

## Buscar
- <kbd>/</kbd>: Buscar texto hacia adelante. 
    - Presionar <kbd>n</kbd> para buscar la siguiente coincidencia. Presionar <kbd>N</kbd> para buscar la anterior coincidencia.
- <kbd>*</kbd>: Buscar la palabra sobre el cursor.
    - Presionar <kbd>n</kbd> para buscar la siguiente coincidencia. Presionar <kbd>N</kbd> para buscar la anterior coincidencia.

## Copiar, cortar, pegar (En [Visual Mode](#Entrar-en-visual-mode))
- <kbd>y</kbd>: Copiar. [Ver copiar](#Yankcopiar)
- <kbd>d</kbd>: Cortar. [Ver cortar](#Deletecortar)
- <kbd>p</kbd>: Pegar despues del cursor.

## Cambiar
- <kbd>c</kbd>: Cambiar. [Ver cambiar](#Changecambiar)

## Undo, Redo
- <kbd>u</kbd>: Deshacer. <kbd>Ctrl</kbd> + <kbd>z</kbd>
- <kbd>Ctrl</kbd> + <kbd>r</kbd>: Rehacer. <kbd>Ctrl</kbd> + <kbd>y</kbd>

## Guardar, Salir
- <kbd>:</kbd> + <kbd>w</kbd>: Guardar.
- <kbd>:</kbd> + <kbd>q</kbd>: Salir.
- <kbd>:</kbd> + <kbd>wq</kbd>: Guardar y salir.
- <kbd>:</kbd> + <kbd>q!</kbd>: Salir sin guardar.

# Comandos compuestos

## Yank/copiar (En [Normal Mode](#Normal-Mode))
- <kbd>y</kbd> + <kbd>y</kbd>: Copiar una linea.
- <kbd>y</kbd> + <kbd>w</kbd>: Copiar una palabra.
- <kbd>y</kbd> + <kbd>a</kbd> + <kbd>p</kbd>: Copiar un parrafo.
- <kbd>y</kbd> + <kbd>i</kbd> + <kbd>(</kbd>: Copiar entre parentesis.

## Delete/cortar (En [Normal Mode](#Normal-Mode))
- <kbd>d</kbd> + <kbd>d</kbd>: Cortar una linea.
- <kbd>d</kbd> + <kbd>w</kbd>: Cortar una palabra.
- <kbd>d</kbd> + <kbd>a</kbd> + <kbd>p</kbd>: Cortar un parrafo.
- <kbd>d</kbd> + <kbd>i</kbd> + <kbd>(</kbd>: Cortar entre parentesis.

## Change/cambiar (En [Normal Mode](#Normal-Mode))
- <kbd>c</kbd> + <kbd>c</kbd>: Cambiar una linea.
- <kbd>c</kbd> + <kbd>w</kbd>: Cambiar una palabra.
- <kbd>c</kbd> + <kbd>i</kbd> + <kbd>"</kbd>: Cambiar entre comillas.
- <kbd>c</kbd> + <kbd>i</kbd> + <kbd>(</kbd>: Cambiar entre parentesis.

## Comandos con movimiento
- <kbd>comando</kbd> + <kbd>movimiento</kbd>: Ejecutar el comando con el movimiento como argumento.
    - Ejemplo: <kbd>y</kbd> + <kbd>w</kbd>: Copiar una palabra.
    - Ejemplo: <kbd>d</kbd> + <kbd>f</kbd> + <kbd>(</kbd>: Cortar hasta el caracter "(" (Incluyendo el parentesis).

## Comandos con numeros
- <kbd>n</kbd> + <kbd>comando</kbd>: Ejecutar el comando n veces.
    - Ejemplo: <kbd>3</kbd> + <kbd>j</kbd>: Moverse 3 lineas hacia abajo.
    - Ejemplo: <kbd>3</kbd> + <kbd>d</kbd> + <kbd>w</kbd>: Cortar 3 palabras.
