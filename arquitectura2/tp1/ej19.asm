.DATA
string DB "holaprueba0"
.CODE
  inicio:
  mov ax, @data
  mov ds, ax

  mov ax, offset string
  push ax
  call longString

  mov ax, 4C00h
  int 21h

  longString proc
  push bp
  mov bp, sp
  
  iterarString:
  mov bx, ss[bp + 4] ; offset string 
  cmp ds:[bx+si], '0' ; movemos el puntero BX con el contador
  je fin                                                        
  inc si ; contador
  jmp iterarString

  fin:
  mov ax, si ; mover a AX el contador
  inc ax ; +1 pq no conto el ultimo

  pop bp
  ret 2
  longString endp
END inicio
