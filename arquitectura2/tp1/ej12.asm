.DATA
  n1 DW 1500
  n2 DW 2000
.CODE
  inicio:
  mov ax, @data
  mov ds, ax

  mov bx, n1
  mov cx, n2

  call mayor

  mov ax, 4C00h
  int 21h

  mayor proc
  cmp BX, CX
  ja bx_mayor
  mov ax, cx
  ret

  bx_mayor:
  mov ax, bx
  ret

  mayor endp
END inicio
