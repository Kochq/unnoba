.DATA
  n1 DW 1500
  n2 DW 2000
  max DW ?
.CODE
  inicio:
  mov ax, @data
  mov ds, ax

  mov bx, n1
  mov cx, n2
  mov si, offset n1
  mov di, offset n2

  call mayor_reg
  call mayor_ref

  mov ax, 4C00h
  int 21h

  mayor_reg proc
  cmp BX, CX
  ja bx_mayor
  mov max, cx
  ret

  bx_mayor:
  mov max, bx
  ret

  mayor_reg endp

  mayor_ref proc
  mov bx, ds:[si]
  mov cx, ds:[di]
  cmp bx, cx
  ja bx_mayor2
  mov max, cx
  ret

  bx_mayor2:
  mov max, bx
  ret

  mayor_ref endp
END inicio
