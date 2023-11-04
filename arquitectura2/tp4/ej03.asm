  list P=16f84A
  #include <p16f84a.inc>
  
  __CONFIG _FOSC_XT & _WDTE_OFF & _PWRTE_ON & _CP_OFF
  
  org 0x0
  
  ; Setear puertos
  BSF STATUS, RP0 ; Escribir banco 1
  movlw b'11111111' ; podria ser 00011111 porque los 3 primeros bits dan lo mismo
  movwf TRISA; puerto a como entrada
  
  CLRF TRISB; puerto b salida
  BCF STATUS, RP0
  
loop:
  movf PORTA, W ; Leer todos los pines del puerto a y guardar su estado en W
  CALL    DISPLAY
  movwf PORTB ; Escribir en el puerto b lo que lei en el puerto a

  goto loop

    
DISPLAY
    ADDWF   PCL,F 
    ;DT 0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x67,0x77,0x7C,0x39,0x5E,0x79,0x71
    RETLW   3FH		;0
    RETLW   06H		;1
    RETLW   5BH		;2
    RETLW   4FH		;3
    RETLW   66H		;4
    RETLW   6DH		;5
    RETLW   7DH		;6
    RETLW   07H		;7
    RETLW   7FH		;8
    RETLW   67H		;9
    RETLW   77H		;A
    RETLW   7CH		;B
    RETLW   39H		;C
    RETLW   5EH		;D
    RETLW   79H		;E
    RETLW   71H		;F 
    END