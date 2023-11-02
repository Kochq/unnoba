  list P=16f84A
  #include <p16f84a.inc>
  org 0x00
 
puntero equ 0x20 ; Puntero a lista
contador equ 0x40 ; Numero a meter en la lista
limite equ 0x41 
  
  movlw 0x0 ; Contador que comienza en 0
  movwf contador
  
  movlw 0x20 ; el dieciseisavo numero par es el .36 = 0x20
  movwf limite
  
  movlw puntero ; Ya seteamos FSR
  movwf FSR
  
bucle:
  movlw 0x2 ; Sumar 2 a contador
  addwf contador, 1 ; contador = contador + W
  movf contador, 0 ; W = contador
  movwf INDF ; Escribir W en puntero
  incf FSR ; Mover puntero
  
  ; Comprobar si ya iteramos 16 veces (restando contador con limite para ver si son iguales)
  subwf limite, 0 ; W = limite - W (W = contador)
  btfsc STATUS, Z 
  goto terminar ; Si la resta dio 0 (contador = limite)
  goto bucle ; Si no (contador != limite)
  
terminar:
  END