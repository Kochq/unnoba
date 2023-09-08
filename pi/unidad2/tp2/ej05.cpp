#include <iostream>

void masUno(int arreglo[], short largo) {
  for(int i = 0; i<largo; i++) 
    arreglo[i]++;
}

int main() {
  int arreglo[5] = {1,2,3,4,5};
  short largo = sizeof(arreglo)/sizeof(int); 
  /* 
   *si dividis el tamaño del array por el tamaño de las cosas que contiene, tenes la cantidad de elementos del array
   *sizeof(arreglo) = cantidad de bytes que ocupa el array
   *sizeof(int) = cantidad de bytes que ocupa un int (tipo de dato que guarda el array) 
  */

  masUno(arreglo, largo);
}
