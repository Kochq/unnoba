#include <iostream>

int main() {
  long int secs;
  int horas, mins, secsR;

  std::cout << "Ingrese cantidad de segundos: ";
  std::cin >> secs;

  horas = secs / 3600;
  mins = (secs % 3600) / 60;
  secsR = secs % 60;

  std::cout << horas << " horas " << mins << " minutos " << secsR << " segundos";

  return 0;
}
