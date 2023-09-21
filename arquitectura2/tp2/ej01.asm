.DATA
.CODE
  inicio:
  mov ax, @data
  mov ds, ax

  mov AL, 'b' 

  call imprimirCaracter

  mov ax, 4C00h
  int 21h

  imprimirCaracter proc
  mov ah, 02h ; mostrar caracter  
  mov dl, al ; muevo el caracter que se guardo en Al a DL para mostrarlo
  int 21h
  
  ret
  imprimirCaracter endp

END inicio
