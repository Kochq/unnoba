.DATA
str2 DB "Perez0"
str1 DB "Julian 0"
.CODE
  inicio:
  mov ax, @data
  mov ds, ax

  mov ax, offset str2
  push ax
  mov ax, offset str1
  push ax
  call longString

  mov ax, 4C00h
  int 21h

  longString proc
  push bp
  mov bp, sp
  mov bx, ss[bp + 4] ; offset string1
  mov di, ss[bp + 6] ; offset string2
  
  iterarPrimerStr:
  cmp ds:[bx], '0' ; movemos el puntero BX con el contador
  je iterarSegundoStr                                                        
  inc bx ; incrementamos directamente bx para ya saber donde termina
  jmp iterarPrimerStr

  iterarSegundoStr:
  inc bx
  cmp ds:[di], '0' ; movemos el puntero BX con el contador
  je fin                                                        

  mov al, ds:[di] ; movemos el caracter en la direccion di a la direccion bx
  mov ds:[bx], al ; usando un registro para poder hacerlo
  inc di 
  jmp iterarSegundoStr

  fin:
  mov al, ds:[di] ; para el ultimo char
  mov ds:[bx], al

  pop bp
  ret 2
  longString endp
END inicio
