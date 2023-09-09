#include <iostream>
#include <istream>
#include <string>

int main() {
  const short MAX = 500;
  short cantLibros = 0;
  struct libro {
    std::string titulo;
    std::string autor;
    std::string editorial;
    short cantHojas;
    int isbn;
  };

  libro libros[MAX];

  for(int i = 0; i<MAX; i++){
    std::cout << "INGRESE UN NUEVO LIBRO" << std::endl;

    std::cout << "Ingrese el titulo del libro: ";
    std::ws(std::cin); //Sin esto a partir del segundo loop el getline lee el espacio en blanco que deja en std::cin
    std::getline(std::cin, libros[i].titulo);

    std::cout << "Ingrese el autor del libro: ";
    std::ws(std::cin);
    std::getline(std::cin, libros[i].autor);

    std::cout << "Ingrese el editorial del libro: ";
    std::ws(std::cin);
    std::getline(std::cin, libros[i].editorial);

    std::cout << "Ingrese la cantidad de hojas del libro: ";
    std::cin >> libros[i].cantHojas;

    std::cout << "Ingrese el ISBN del libro: ";
    std::cin >> libros[i].isbn;

    cantLibros++;

    if(libros[i].titulo == "El hobbit") break;
  }


  for(int j=0; j<cantLibros; j++) {
    std::cout << "---------------------------------------" << std::endl;
    std::cout << "Titulo: " << libros[j].titulo << std::endl;
    std::cout << "Autor: " << libros[j].autor << std::endl;
    std::cout << "Editorial: " << libros[j].editorial << std::endl;
    std::cout << "Cantidad de hojas: " << libros[j].cantHojas << std::endl;
    std::cout << "ISBN: " << libros[j].isbn << std::endl;
  }

  return 0;
}
