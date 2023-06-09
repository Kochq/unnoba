.DATA      
    numeroPrimo DB 7
    primoGrande DW 9973
    impares DB 1,3,7,9
    nombre DB "Luis"
    arreglo_5 DB 5 DUP (1Fh)
.CODE
inicio:  
    mov ax, @data
    mov ds, ax
    mov ax, primoGrande     ; (A)
    mov al, impares[2]      ; (B)  
    mov bx, offset nombre   ; Posicion de memoria donde comienza 'nombre'
    mov ds[bx], 82          ; Cambiar 'L' por 'R' [Tabla ascii]
    mov ds[bx + 3], 122     ; Cambiar 's' por 'z' [Tabla ascii]                                                                              
    mov bl, arreglo_5[0]    ; (C) 
    mov cl, arreglo_5[1]    ; (C)
    mov dl, arreglo_5[2]    ; (C)
    
END inicio
