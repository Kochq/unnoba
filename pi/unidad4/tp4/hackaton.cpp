// Mateo Koch, Bruno Lodeiro, Valentin Cidoni, Lucas Martino, Juan Pedro Tagliaferro
#include <iostream>

struct Node {
  int dato;
  Node* next;
  // Cambiamos el constructor (funcion que se utiliza al crear un nuevo nodo) para no tener que ingresar datos por teclado
  Node(int valor) : dato(valor), next(nullptr) {} 
};

// Desafio 1
int calcularExponente(int numero, int exponente, int producto = 1) {
  if(exponente == 0) return producto; // cuando el exponente sea 0 automaticamente devolvemos el resultado
  // Llamamos recursivamente a la funcion, manteniendo el mismo numero pero cambiando el exponente
  // Multiplicando n veces al numero por producto
  return calcularExponente(numero, exponente-1, producto * numero); 
}

// Desafio 2
bool tienenMismaLong(Node* list1, Node* list2) {
  // Comprobando si estamos viendo espacio en memoria valido
  if (list1 == nullptr && list2 == nullptr) return true; // Si llegamos al final a la vez son de la misma long
  if (list1 == nullptr || list2 == nullptr) return false; // Si no, no
  return tienenMismaLong(list1->next, list2->next); // Iteramos sobre las dos listas
}

// Funcion encargada de cargar las listas enlazadas
void cargarListas(Node*& list1, Node*& list2) {
  list1 = new Node(1);
  list1->next = new Node(2);
  list1->next->next = new Node(3);

  list2 = new Node(4);
  list2->next = new Node(5);
  list2->next->next = new Node(6);
}

int main() {
  // Creamos las listas
  Node* list1 = nullptr;
  Node* list2 = nullptr;

  cargarListas(list1, list2);

  if(tienenMismaLong(list1, list2)) std::cout << "Tienen la misma longitud" << std::endl;
  else std::cout << "No tienen la misma longitud" << std::endl;

  std::cout << calcularExponente(4, 7);

  return 0;
}
