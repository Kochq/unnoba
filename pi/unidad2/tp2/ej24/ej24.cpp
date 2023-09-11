#include <iostream>
#include <string>
#include "ciudadano.h"
#include "cargaArreglo.h"
#include "mostrarRegistro.h"
#include "registroPorSexo.h"


int main() {
  short MAX = 5000;
  short cantCiudadanos = 0;
  ciudadano ciudadanos[MAX];

  //a)
  cargarCiudadano(ciudadanos, cantCiudadanos);

  //b)
  mostrarRegistro(ciudadanos, cantCiudadanos);

  //c)
  registroPorSexo(ciudadanos, cantCiudadanos, 'M');

  //d)
  registroPorSexo(ciudadanos, cantCiudadanos, 'F');
  
  return 0;
}

