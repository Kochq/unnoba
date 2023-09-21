.DATA
  str DB "Hola como estas0"
.CODE
  inicio:
  MOV AX, @data
  MOV DS, AX
  
  PUSH OFFSET str ; Pusheo la direccion del str a la pila
  CALL imprimirString

  MOV AX, 4C00h
  INT 21h
 
  imprimirString PROC
  PUSH BP
  MOV BP, SP   
  MOV SI, SS[BP+4] ; muevo a si la DIRECCION del str
  
  imprimir
  MOV AL, DS:[SI] ; muevo a AL el valor dentro de la direccion 
  CMP AL, '0'
  JE fin ; Si es el 0 termino el programa         
  CALL imprimirCaracter ; imprimo el caracter
  INC SI ; Incremento SI para evaluar el siguiente elemento del array  
  JMP imprimir
  
  fin:  
  POP BP   
  RET
  imprimirString ENDP

  imprimirCaracter PROC
  MOV AH, 02h ; mostrar caracter  
  MOV DL, AL ; muevo el caracter que se guardo en Al a DL para mostrarlo
  INT 21h
  
  RET
  imprimirCaracter ENDP

END inicio
