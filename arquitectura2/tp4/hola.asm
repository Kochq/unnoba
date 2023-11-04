  list P=16f84A
  #include <p16f84a.inc>
  
  __CONFIG _FOSC_XT & _WDTE_OFF & _PWRTE_ON & _CP_OFF

  CBLOCK   0X0C       ;RAM USUARIOS
  ENDC
  
  org 0x0
  
  ; Setear puertos
  BSF STATUS, RP0
  CLRF TRISA
  CLRF TRISB
  BCF STATUS, RP0
  
loop:
  ; H
  movlw B'01110110' ; H
  movwf PORTB ; Escribir W en portb
  movlw B'00001110' ; digito 1
  movwf PORTA ; digito 1
  CALL    RETARDO_100ms ; delay
  ; O
  movlw B'00111111'
  movwf PORTB
  movlw B'00001101'
  movwf PORTA
  CALL    RETARDO_100ms
  ; L
  movlw B'00111000'
  movwf PORTB
  movlw B'00001011'
  movwf PORTA
  CALL    RETARDO_100ms
  ; A
  movlw B'01110111'
  movwf PORTB
  movlw B'00000111'
  movwf PORTA
  CALL    RETARDO_100ms

  goto loop

CBLOCK 
    Contador
    Contador_2
ENDC
    
RETARDO_100ms
    MOVLW   d'100'
    GOTO    Retardos_ms	
    
Retardos_ms   
    MOVWF   Contador_2		
Regresa_Cuenta_2
    MOVLW   d'249'		 
    MOVWF   Contador			
Regresa_Cuenta
    NOP				
    DECFSZ  Contador,F		
    GOTO    Regresa_Cuenta		
    DECFSZ  Contador_2,F		
    GOTO    Regresa_Cuenta_2 	
    RETURN
    END