  list P=16f84A
  #include <p16f84a.inc>
  org 0x00
  
var1 equ 0x20
var2 equ 0x21
  movlw .97 ; W = 97(decimal)
  movwf var1 ; var1  =97
  movlw var1 ; w = 0x20
  addwf var1 ; var1 = w + var1 = 129
  addwf var1, 0 ; W = var1+W = 161
  movwf var2 ; var2 = 161
  addlw var2 ; W = W+var2(0x21) = 194
  movf var2, 0 ; W = var2 = 161
  incf var1 ; var1 = 130
  incf var1, 0 ; W = var1+1 = 131
  END