.DATA
  nombre DB "Mateo"
  apellido DB "Koch"
.CODE
inicio:
  mov ax, @data
  mov ds, ax
  mov bx, offset nombre
  mov AL, ds[bx]          ;Inicial de nombre
  mov bx, offset apellido
  mov AH, ds[bx]          ;Inicial de apellido
END inicio
