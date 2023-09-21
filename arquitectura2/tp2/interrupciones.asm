.DATA
  buffer DB 6,0, 6 dup("$"), "$"
  salto DB 0ah, 0Dh, "$"
  str1 DB "ingrese por pantalla:$"
  
.CODE
  inicio:
  mov ax, @data
  mov ds, ax

  mov ah, 09h
  mov dx, offset str1
  int 21h

  mov ah, 0Ah
  mov dx, offset buffer
  int 21h

  mov ah, 09h
  mov dx, offset salto
  int 21h 

  mov ah, 09h
  mov dx, offset buffer
  add dx, 2
  int 21h

  mov ax, 4C00h
  int 21h
END inicio
