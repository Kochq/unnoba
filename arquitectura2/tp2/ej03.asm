.DATA

.CODE
  inicio:
  mov ax, @data
  mov ds, ax

  call leerCaracter
  
  mov ax, 4C00h
  int 21h
  
  leerCaracter proc
  mov ah, 01h
  int 21h

  ret
  leerCaracter endp

  leerCaracter
END inicio
