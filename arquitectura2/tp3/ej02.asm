  list P=16f84A
  #include <p16f84a.inc>
  
  org 0x00 ; Si no esta esto no podemos ejecutar ninguna instruccion
  
suma equ 0x10
 movlw .123
 movwf suma

caracter equ 0x11
 movlw 'M'
 movwf caracter
 
mascara equ 0x12
 movlw b'10110101'
 movwf mascara

num_largo equ 0x13
 movlw 0x4F
 movwf num_largo
 movlw 0xA3
 movwf num_largo+1
 
lista equ 0x15 ; 0x15 en vez de 0x14 porque ya lo ocupe haciendo num_largo+1
 movlw .13
 movwf lista
 movlw .29
 movwf lista+1
 movlw .45
 movwf lista+2
 movlw .76
 movwf lista+3
 movlw .42
 movwf lista+4
 
  END
