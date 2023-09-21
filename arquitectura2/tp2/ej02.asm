.DATA
  digito DB 4
.CODE
  inicio:
  mov ax, @data
  mov ds, ax

  mov al, digito

  call imprimirDigito

  mov ax, 4C00h
  int 21h

  imprimirDigito proc
    call decimalACaracter
    call imprimirCaracter
  imprimirDigito endp

  decimalACaracter proc
    add al, 48
    cmp al, "0"
    jb noDigito
    cmp al, "9"
    ja noDigito
    ret

    noDigito:
    mov ax, "X"
    ret
  decimalACaracter endp

  imprimirCaracter proc
  mov ah, 02h ; mostrar caracter  
  mov dl, al
  int 21h
  ret
  imprimirCaracter endp
END inicio
