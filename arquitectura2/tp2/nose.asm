.DATA
  pedirNumero DB "Ingrese un caracter:$"
  salto DB 0ah, 0dh, "$"
.CODE
  inicio:
  mov ax, @data
  mov ds, ax

  mov BX, offset pedirNumero
  mov CX, offset salto

  call imprimirCaracter

  mov ax, 4C00h
  int 21h

  imprimirCaracter proc
  mov ah, 09h ; imprimir mensaje
  mov dx, bx
  int 21h 

  mov ah, 01h ; recibir caracter
  int 21h
  mov bl, al ; dejo el caracter ascii en dl para mostrarlo despues

  mov ah, 09h ; enter
  mov dx, cx
  int 21h

  mov ah, 02h ; mostrar caracter  
  mov dl, bl ; muevo el caracter que se guardo en Al a DL para mostrarlo
  int 21h
  
  ret
  imprimirCaracter endp

END inicio
