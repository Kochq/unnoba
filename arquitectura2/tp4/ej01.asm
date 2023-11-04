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
  movwf PORTB ; Escribir en el puerto b lo que lei en el puerto a

  goto loop ; loopear
  END