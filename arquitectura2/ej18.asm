.DATA
  numeros DW 2,4,5,7,6,8,9,23,65,7863,234,123,1,5
  largoNumeros DW 13
.CODE
  inicio:
  mov ax, @data
  mov ds, ax
  
  mov ax, offset numeros
  push ax
  push largoNumeros

  call mayorArreglo

  mov ax, 4C00h
  int 21h

  mayorArreglo proc
  push bp
  mov bp, sp

  mov cx, ss[bp + 4] ; Largo
  mov bx, ss[bp + 6] ; Direccion
  mov ax, ds:[bx] ; primer elemento

  iterar:
  mov si, cx
  cmp ax, ds:[bx + si] 
  jb nuevoMayor
  dec cx
  loop iterar

  nuevoMayor:
  cmp cx, 0
  je fin
  mov ax, ds:[bx + si]
  dec cx
  loop iterar

  fin:
  pop bp
  ret 4
  mayorArreglo endp
END inicio
