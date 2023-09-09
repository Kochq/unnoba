#include <iostream>

int main() {
  float arregloBi[7][10] = {0.0}; //Si no lo inicializan en 0 el (c) lo van a ver todo con valores basura

  //a)
  arregloBi[1][4] = 105.0;

  //b)
  for(int i = 0; i<10; i++) {
    arregloBi[3][i] = 1.5;
  }
  
  //c)
  for(int i = 0; i<7; i++) { //Iterar en filas

    for(int j = 0; j<10; j++) { //Iterar en columnas
      std::cout<<arregloBi[i][j] << " ";
    }

    std::cout<<std::endl;
  }

  //d)
  for(int i = 0; i<7; i++) {
    float aux = arregloBi[i][2];
    arregloBi[i][2] = arregloBi[i][4];
    arregloBi[i][4] = aux;
  }

  //e)
  for(int i = 0; i<10; i++) {
    float suma2, suma6;
    suma2 += arregloBi[1][i];
    suma6 += arregloBi[5][i];
  }

  //f)
  for(int i = 0; i<7; i++) {
    std::cout << arregloBi[i][2] << " | ";
  }

  //g)
  float mayor = arregloBi[0][0];
  float fila, columna;
  for(int i = 0; i<7; i++) { //Iterar en filas
    for(int j = 0; j<10; j++) { //Iterar en columnas
      if(arregloBi[i][j] > mayor) {
        mayor = arregloBi[i][j];
        columna = j;
        fila = i;
      }
    }
  }
  std::cout << "El mayor elemento esta en: "<<fila<<columna;

}
