#include <cstdio>
#include <iostream>
#include <istream>
#include <string>
#include "ciudadano.h"


void cargarCiudadano(struct ciudadano *ciudadanos, short &cantCiudadanos) {
  short tipoDNI;

  do {
    std::cout << "Ingrese el nombre del ciudadano: ";
    std::cin >> ciudadanos[cantCiudadanos].nombre;

    std::cout << "Ingrese el apellido del ciudadano: ";
    std::cin >> ciudadanos[cantCiudadanos].apellido;

    std::cout << "Ingrese la direccion del ciudadano: ";
    std::ws(std::cin);
    std::getline(std::cin, ciudadanos[cantCiudadanos].direccion);

    do {
      std::cout << "Ingrese un tipo de documento valido para el ciudadano: ";
      std::cin >> tipoDNI;
    }while (tipoDNI != 1 && tipoDNI != 2 && tipoDNI != 3);
    ciudadanos[cantCiudadanos].tipoDocumento = tipoDNI;

    std::cout << "Ingrese el nro de documento del ciudadano: ";
    std::cin >> ciudadanos[cantCiudadanos].nroDocumento;

    std::cout << "Ingrese la fecha de nacimiento del ciudadano (AAAAMMDD): ";
    std::cin >> ciudadanos[cantCiudadanos].fechaNacimiento;

    std::cout << "Ingrese el sexo del ciudadano (M/F): ";
    std::cin >> ciudadanos[cantCiudadanos].sexo;

    cantCiudadanos++;

  }while (ciudadanos[cantCiudadanos-1].nombre != "Pepe" || ciudadanos[cantCiudadanos-1].apellido != "Argento");
}
