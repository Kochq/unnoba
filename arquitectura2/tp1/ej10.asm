.DATA
  var DB 8,7,6,5,4,3,2,1
  inv DB 7 DUP (?)
.CODE
  inicio:
  mov ax, @data
  mov ds, ax

  mov bx, offset var
  mov si, 0 
  mov cx, 7

  iterar:
  mov di, cx
  mov dx, ds:[bx + di]
  mov inv[si], dl
  inc si
  loop iterar

  mov ax, 4C00h
  int 21h
END inicio
