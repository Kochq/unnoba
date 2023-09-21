.DATA
  Numeros DB 1,2,3,4,5,6,7,8,9,10
  Copia DB 10 DUP (0)
  Long DW 10
.CODE
  inicio:
    mov ax, @data
    mov ds, ax
    
    mov bx, offset Numeros
    mov cx, Long
    mov si, 0

  iterar:
    mov dl, Numeros[si]
    mov Copia[si], dl
    inc si
    loop iterar

    mov ax, 4C00h
    int 21h
END inicio
