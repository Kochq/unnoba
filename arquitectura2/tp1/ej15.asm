.DATA
  validos DB "0","1","2","3","4","5","6","7","8","9"
  caracter DB "4"
.CODE
  inicio:
  MOV AX, @data
  MOV DS, AX

  MOV AL, caracter
  CALL caracterDecimal

  MOV AX, 4C00h
  INT 21h

  caracterDecimal PROC

  MOV BX, OFFSET validos ; Direccion de memoria del array
  MOV CX, 9 ; Cantidad de numeros que hay
  MOV DL, 0

  iterar:         
  MOV SI, CX ; Muevo el contado a si para poder usarlo dentro del ds
  MOV DL, DS:[BX - SI] ; Muevo a dl uno de los caracteres validos
  CMP DL, caracter ; Comparo con el mio
  JE valido ; Si coinciden, es un digito
  LOOP iterar

  MOV AH, 0FFh ; No es un digito
  RET
  
  valido:
  MOV AH, CL ; Es un digito
  RET    
  
  caracterDecimal ENDP

END inicio
