.DATA
  validos DB "0","1","2","3","4","5","6","7","8","9"
  caracter DB "4"
  digito DW ?
.CODE
  inicio:
  mov ax, @data
  mov ds, ax

  mov bx, offset validos
  mov si, 0

  iterar:         
  mov cl, ds:[bx + si]
  cmp cl, caracter
  je valido
  cmp si, 9
  je invalido
  inc si
  jmp iterar
  

  valido:
  mov digito, si
  invalido:
  mov digito, 0FFh

  mov ax, 4C00h
  int 21h
END inicio
