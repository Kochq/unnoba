.DATA
  validos DB "0","1","2","3","4","5","6","7","8","9"
  caracter DB "4"
.CODE
  inicio:
  mov ax, @data
  mov ds, ax

  mov al, caracter
  call caracterDecimal

  mov ax, 4C00h
  int 21h

  caracterDecimal proc

  mov bx, offset validos
  mov cx, 9
  mov dl, 0

  iterar:         
  mov si, cx
  mov dl, ds:[bx - si]
  cmp dl, caracter
  je valido
  loop iterar

  mov ah, 0FFh
  caracterDecimal endp

  valido:
  mov ah, cl
END inicio
