#include <iostream>
#include "ciudadano.h"
#include "mostrarRegistro.h"

void registroPorSexo(struct ciudadano ciudadanos[], short cantCiudadanos, char sexo) {
  ciudadano ciudadanosS[5000];
  short cantCiudadanosS = 0;

  for (int i=0; i<cantCiudadanos; i++) {
    if(ciudadanos[i].sexo == sexo) {
      ciudadanosS[cantCiudadanosS].nombre = ciudadanos[i].nombre;
      ciudadanosS[cantCiudadanosS].apellido = ciudadanos[i].apellido;
      ciudadanosS[cantCiudadanosS].direccion = ciudadanos[i].direccion;
      ciudadanosS[cantCiudadanosS].tipoDocumento = ciudadanos[i].tipoDocumento;
      ciudadanosS[cantCiudadanosS].nroDocumento = ciudadanos[i].nroDocumento;
      ciudadanosS[cantCiudadanosS].fechaNacimiento = ciudadanos[i].fechaNacimiento;
      ciudadanosS[cantCiudadanosS].sexo = ciudadanos[i].sexo;

      cantCiudadanosS++;
    }
  }

  mostrarRegistro(ciudadanosS, cantCiudadanosS);
}
