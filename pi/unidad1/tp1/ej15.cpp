#include <cctype>
#include <iostream>
#include <string>

using namespace std;
//Implementar aquí las funciones invocadas en main
int cantidadVocales(string cadena) {
  const string vocales = "aeiouAEIOU";
  int cantVocales = 0;

  for(char c : cadena) {
    if(vocales.find(c) >= 0 && vocales.find(c) < 10) { // el .find() te devuelve el indice en donde encontro 'c'
      cantVocales++;
    }
  }  

  return cantVocales;
}

int contar(string cadena, char caracter) {
  int cantidad = 0;

  for(char c : cadena) {
    if(c == caracter) cantidad++;
  }

  return cantidad;
}

void caracteresPares(string cadena) {
  for(int i = 0; i < cadena.length(); i++) {
    if(i % 2 == 0) cout << cadena[i];
  }
}

int main() {
  int opcion;
  do {
    string cadena;
    cout << "Ingresar frase: ";
    getline(cin>>ws, cadena);
    cout << "MENÚ: " << endl;
    cout << "1. Cantidad total de vocales (mayúsculas y minúsculas)." << endl;
    cout << "2: Contar cuántas veces aparece un carácter." << endl;
    cout << "3: Mostrar caracteres en posiciones (índice) pares." << endl;
    cout << "0: Salir." << endl;
    cout << "Opción elegida: ";
    cin >> opcion;
    switch (opcion) {
      case 1:
        cout << "Cantidad de vocales: " << cantidadVocales(cadena) << endl;
        break;
      case 2:
        cout << "Ingresar carácter a contar: ";
        char caracter;
        cin >> caracter;
        cout << "Cantidad encontrada: " << contar(cadena, caracter) << endl;
        break;
      case 3:
        caracteresPares(cadena);
        cout << endl;
        break;
      case 0:
        break;
      default:
        cout << "Opción no válida" << endl;
        break;
    }
  } while (opcion != 0);
}
