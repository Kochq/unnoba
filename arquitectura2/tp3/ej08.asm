  list P=16f84A
  #include <p16f84a.inc>
  org 0x00

  
num1 equ 0x20
num2 equ 0x21
mayor equ 0x22
 
 movlw b'10101110'
 movwf num1
 movlw b'10101101'
 movwf num2
 
 call comparar
 
 comparar:
  movf num1, 0
  subwf num2, 0
  btfsc STATUS, C 
  goto num2Mayor
  movf num1, 0
  movwf mayor
  return
  
num2Mayor:
  movf num2, 0
  movwf mayor
  return
 
 END