#ifndef MOSTRARREGISTRO_H
#define MOSTRARREGISTRO_H
#include <iostream>
#include "ciudadano.h"

void mostrarRegistro(struct ciudadano ciudadanos[], short cantCiudadanos) {
  for (int i=0; i<cantCiudadanos; i++) {
    long fechaResto = ciudadanos[i].fechaNacimiento % 10000;
    long año = ciudadanos[i].fechaNacimiento / 10000;
    long mes = fechaResto / 100;
    long dia = fechaResto % 100;
    std::string tipoDNI = ciudadanos[i].tipoDocumento == 1 ? "DNI" : ciudadanos[i].tipoDocumento == 2 ? "Pasaporte" : "Otro";
    std::string sexo = ciudadanos[i].sexo == 'F' ? "Femenino" : "Masculino";

    std::cout << "Nombre y Apellido: " << ciudadanos[i].nombre << " " << ciudadanos[i].apellido << std::endl;
    std::cout << "Direccion: " << ciudadanos[i].direccion << std::endl;
    std::cout << "Fecha de nacimiento: " << dia << "/" << mes << "/" << año << std::endl;
    std::cout << "Tipo de documento: " << tipoDNI << std::endl;
    std::cout << "Número de documento: " << ciudadanos[i].nroDocumento << std::endl;
    std::cout << "Sexo: " << sexo << std::endl;
  }
}

#endif
