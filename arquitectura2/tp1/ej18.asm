.DATA
  numeros DW 2,4,5,7,6,8,9,23,65,7863,234,123,1,5
  largoNumeros DW 26 ; Tiene que ser el doble del tamaño real porque ocupan 2 bytes
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
  mov si, cx ; Copio el valor de cx en si porque no lo puedo meter en ds
  cmp ax, ds:[bx + si] ; Comparo valor actual con otro del array
  jb nuevoMayor ; si ax es menor entonces ds:[bx+si] es el nuevo mayor
  dec cx ;En total restamos 2 a cx
  loop iterar ;En total restamos 2 a cx

  nuevoMayor:
  cmp cx, 0 ; Si ya no quedan mas elementos se termina el programa
  je fin
  mov ax, ds:[bx + si] ; ds:[bx+si] es mas grande que el numero en AX 
  dec cx ; Restamos 2 a cx
  loop iterar

  fin:
  pop bp
  ret 4
  mayorArreglo endp
END inicio
