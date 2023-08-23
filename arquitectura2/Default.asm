.DATA

.CODE
  inicio:
  mov ax, @data
  mov ds, ax

  mov ax, 4C00h
  int 21h
END inicio
