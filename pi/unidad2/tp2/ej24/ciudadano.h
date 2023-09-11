#ifndef CIUDADANO_H
#define CIUDADANO_H

#include <string>

struct ciudadano {
  std::string nombre, apellido, direccion;
  int tipoDocumento, nroDocumento;
  long fechaNacimiento; //AAAAMMDD
  char sexo;
};

#endif 
