  list P=16f84A
  #include <p16f84a.inc>
  org 0x00

  cblock 0x20
    ax:2  ; 0x20 y 0x21
    bx:2 ; 0x22 y 0x23
    suma:2 ; 0x24 y 0x25
  endc
 
 ; AX = 01B4 = 436
 movlw 0xB4
 movwf ax
 movlw 0x01
 movwf ax+1
 
 ; BX = 0211 = 529
 movlw 0xB4
 movwf bx
 movlw 0x02
 movwf bx+1
 
 call sumar
 
sumar:
  movf ax, 0 ; W = AX
  addwf bx, 0 ; W = W + BX 
  movwf suma ; suma = W
  btfsc STATUS, C ; Comprobar si el carry el 0
  goto hayCarry ; El carry no es 0
continuar: ; El carry es 0
  movf ax+1, 0 ; Lo mismo que lo de arriba pero con la parte alta
  addwf bx+1, 0 
  movwf suma+1 ;
  
  movf suma, 0
  movwf ax
  movf suma+1, 0
  movwf ax+1
 return
 
 hayCarry:
  incf ax+1
  goto continuar
 
 END