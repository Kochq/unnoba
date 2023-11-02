  list P=16f84A
  #include <p16f84a.inc>
  org 0x00
 
lista equ 0x20
minimo equ 0x30
contador equ 0x31
 
 ; Crear primer array
 movlw .4 ; W = 1
 movwf lista ; var = w
 movlw .23
 movwf lista+1
 movlw .53
 movwf lista+2
 movlw .2
 movwf lista+3
 movlw .5
 movwf lista+4 
 
 
  movf lista, 0 ; Mover primer elemento de la lista a minimo
  movwf minimo
  
  movlw .4 ; Cantidad de veces que tiene que iterar
  movwf contador
  
  movlw lista+1 ; Empezamos a iterar desde el segundo elemento
  movwf FSR
  
bucle:
  movf INDF, 0 ; valor del puntero
  subwf minimo, 0 ; Minimo - W
  btfsc STATUS, C 
  goto noHayCarry ; Si hay carry
  incf FSR, 1 ; Si no hay carry
  DECFSZ contador, 1
  goto bucle ; Si contador no es 0
  return ; Si contador llego a 0
  
  
noHayCarry:
 movf INDF, 0 ; valor del puntero
 movwf minimo ; actualizar minimo
 incf FSR, 1 ; incrementar puntero
 decfsz contador, 1
 goto bucle ; Si contador no es 0
 return ; Si contador llego a 0
 
 END