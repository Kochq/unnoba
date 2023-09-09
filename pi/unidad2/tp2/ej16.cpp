#include <iostream>

int main() {
  bool asientos[5][11] = {0}; //0 = libre
  bool libres;
  short fila, columna;

  do {
    libres = 0;
    for(int i=0; i<5; i++) {
      for(int j=1; j<11; j++) {
        if(!asientos[i][j]) {
          std::cout << "Asiento libre: " << "F:" << i << " C:" << j << std::endl;
          libres = 1;
        }
      }
    }

    if(!libres) break;

    do {
    std::cout << "Selecciona la fila del asiento libre: ";
    std::cin >> fila;
    std::cout << "Selecciona la columna del asiento libre: ";
    std::cin >> columna;

    if(asientos[fila][columna] || columna > 10 || columna < 1 || fila < 0 || fila > 4) 
      std::cout << "Asiento ocupado" << std::endl;

    }while (asientos[fila][columna]);

    asientos[fila][columna] = 1; //Asiento comprado
    std::cout << "Asiento comprado" << std::endl;

  }while (libres);

  std::cout << "Ya no quedan asientos libres.";
}
