#include <iostream>

bool esBisiesto(int año) {
  return (año % 4 == 0 && año % 100 != 0 || año % 400 == 0);
}

bool esDiaValido(int dias, int año) {
  return (dias >= 0 && dias <= (esBisiesto(año) ? 366 : 365));
}

void calcularFecha(int dias, int año) {
  if(!esDiaValido(dias, año)) {
    std::cout << "Ingrese una cantidad de dias valida";
    return; // return para que salga de la funcion, pero vacio porque la funcion es void 
  }

  int mes = 1;
  int diasDelMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  if(esBisiesto(año)) diasDelMes[2] = 29;

  while(dias > diasDelMes[mes]) {
    dias -= diasDelMes[mes];
    mes++;
  }

  std::cout << "Fecha: " << dias << '/' << mes << '/' << año;
}

int main() {
  int dias, año;
  
  std::cout << "Ingrese la cantidad de dias: ";
  std::cin >> dias;
  std::cout << "Ingrese el año: ";
  std::cin >> año;

  calcularFecha(dias, año);

  return 0;
}
