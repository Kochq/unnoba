.DATA
  strVacio DB 6 dup(?)
  largoStr DB 5
.CODE
  inicio: 
  MOV AX, @data
  MOV DS, AX        
                     
  PUSH OFFSET largoStr 
  PUSH OFFSET strVacio  

  CALL leerString
  
  MOV AX, 4C00h
  INT 21h
                   
                   
  leerString PROC
    PUSH BP
    MOV BP, SP
    MOV BX, SS[BP+4] ; direccion de strVacio
    MOV DI, SS[BP+6] ; direccion de largoStr 
    
    formarStr:  
    CALL leerCaracter
    MOV DS:[BX], AL
    CMP BX, DS:[DI]
    JE fin     
    INC BX
    JMP formarStr
    
    fin:
    MOV DS:[BX], '0'            
    POP BP
    RET
  leerString ENDP
  
  leerCaracter PROC ;Leo un caracter y lo guardo en AL
    MOV AH, 01h
    INT 21h 

    RET
  leerCaracter ENDP
END inicio
