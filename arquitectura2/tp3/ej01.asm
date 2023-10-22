  list P=16f84A
  #include <p16f84a.inc>
  ; A
cuenta equ 0x10
 
  ; B
  cblock .32
    num1:2 ; 0x20 y 0x21
    num2:2 ; 0x22 y 0x23
  endc
  
  ; C
  cblock 0x15
    multiplicando ; 0x15
    multiplicador ; 0x16
    producto:2 ; 0x17 y 0x18
  endc
  
; A partir de aca son pruebas que hice

  ORG 0x00		; comienzo del programa

  movlw .123 ; Muevo 123 en decimal a W
  movwf cuenta ; Muevo el valor en W a cuenta (Si, todo se hace en base a W)

  movlw 0x24
  movwf multiplicador
  
  movlw 0x25
  movwf producto
  
  movf cuenta, W    ; Muevo el contenido de cuenta al registro W
  movwf PORTB       ; PORTB = W

  ; Todos los cambios de memoria los veo en Window->Target memory views->File registers
  ; Cambios en el registro W en Window->Target memory views->SFRs
  END