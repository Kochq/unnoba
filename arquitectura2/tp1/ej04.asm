.DATA
  arreglo DB 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20
.CODE
  inicio:
    mov ax, @data
    mov ds, ax

    mov bx, offset arreglo
    mov cx, 20 ; Loop resta 1 a cx y comprueba que no sea 0 para seguir loopeando
    mov al, 0 ; Registro donde voy a contar

  iteracion:
    add al, ds:[bx]
    inc bx
    loop iteracion
    
    ; No se que es esto pero hace que termine bien
    mov ax, 4C00h
    int 21h
END inicio
