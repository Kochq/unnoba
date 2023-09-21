.MODEL SMALL
.STACK
.DATA
  NombreArch DB "unArchivo.lol"
.CODE
  inicio:
    mov ax, @data
    mov ds, ax

    mov bx, offset NombreArch ; En bx esta el primer elemento del array
    mov cx, 0 ; Este tiene que ser distinto de 0 para que no termine el loop

  iterar:
    inc cx
    cmp ds:[bx], "." ; if NombreArch[i] == "." {
    je fin ; break }

    inc bx ; Vamos moviendo el indice que se comparara
    jmp iterar
  fin:
    add cx, 3 ; sumo 3 por la extension

  mov ax, 4C00h
  int 21h
END inicio
