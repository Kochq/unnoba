#include <iostream>
#include <istream>
#include <string>

int main() {
  const short MAX = 5000;
  struct alumno {
    short cuatri1, cuatri2, cuatri3;
    std::string nombre;
  };

  alumno alumnos[MAX];

  for(int i = 0; i<MAX; i++){
    std::cout << "INGRESE UN NUEVO ALUMNO" << std::endl;

    std::cout << "Ingrese el nombre del alumno";
    std::ws(std::cin); //Sin esto a partir del segundo loop el getline lee el espacio en blanco que deja en std::cin
    std::getline(std::cin, alumnos[i].nombre);

    std::cout << "Ingrese la calificacion del primer cuatrimentre";
    std::cin >> alumnos[i].cuatri1;

    std::cout << "Ingrese la calificacion del segundo cuatrimentre";
    std::cin >> alumnos[i].cuatri2;

    std::cout << "Ingrese la calificacion del tercer cuatrimentre";
    std::cin >> alumnos[i].cuatri3;

    if(alumnos[i].cuatri1 > 5 && alumnos[i].cuatri2 > 5 && alumnos[i].cuatri3 > 5) std::cout << "APTO";
    else std::cout << "NO APTO";
  }

  return 0;
}
