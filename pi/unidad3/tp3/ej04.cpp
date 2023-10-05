#include <iostream>
#include <string>

using std::cin;
using std::ws;



int main() {
  struct Producto {
    std::string descripcion;
    float precio;
  };
  struct Venta {
    Producto producto;
    int cantidad;
  };

  //A)
  Venta* ventaPtr = new Venta;

  //B)
  std::cout << "Ingrese una cantidad vendida: ";
  cin >> ventaPtr->cantidad;
  std::cout << "Ingrese una descripcion del producto: ";
  getline(cin>>ws, ventaPtr->producto.descripcion);
  std::cout << "Ingrese el valor de la venta: ";
  cin >> ventaPtr->producto.precio;

  //C)
  ventaPtr->producto.precio *= 0.85;
  
  //D)
  std::cout << "---VENTA---" << std::endl;
  std::cout << "Descripcion del producto: " << ventaPtr->producto.descripcion << std::endl;
  std::cout << "Monto de la venta: " << (ventaPtr->producto.precio) * (ventaPtr->cantidad) << std::endl;
}
