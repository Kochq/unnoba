; Pense que el 6 hablaba listas y a mitad de camino me di cuenta que no (Lo termine igual)
  
  list P=16f84A
  #include <p16f84a.inc>
  org 0x00
  
inv equ 0x20
var equ 0x30
iteradorInv equ 0x35
iteradorVar equ 0x36
valorEscribir equ 0x37
 
 ; Crear primer array
 movlw .1 ; W = 1
 movwf var ; var = w
 movlw .2
 movwf var+1
 movlw .3
 movwf var+2
 movlw .4
 movwf var+3
 movlw .5
 movwf var+4 
 
 movlw var+4
 movwf iteradorVar
 
 movlw inv
 movwf iteradorInv
 
bucle:
  ; Obtener iteradorVar
  movf iteradorVar, 0
  movwf FSR
  
  ; Obtener el valor a escribir
  movf INDF, 0
  movwf valorEscribir
  decf FSR, 1
  
  ; Guardar estado var
  movf FSR, 0
  movwf iteradorVar
  
  ; Obtener iteradorInvestado inv
  movf iteradorInv, 0
  movwf FSR
  
  ; Escribir en array invertido
  movf valorEscribir, 0
  movwf INDF
  
  ; Mover puntero
  incf FSR, 1
  
  ; Actualizar estado iteradorInv
  movf FSR, 0
  movwf iteradorInv

  goto bucle
 
 END