#include <iostream>

struct Node {
  int dato;
  Node* next = nullptr;
  Node(int data) : dato(data), next(nullptr) {}
};

void eliminarNodo(Node* nodoAnt, Node* nodoEliminar) { 
  // Si el nodoEliminar es el ultimo de la lista simplemente lo elimino
  if(nodoEliminar->next == nullptr) {
    nodoAnt->next = nullptr;
    delete nodoEliminar;
  } else {
    nodoAnt->next = nodoEliminar->next;
    delete nodoEliminar;
  }
}

int eliminarOcurrencias(Node*& head, int numeroEliminar) {
  int ocurrencias = 0;

  // Lista no existe
  if(head == nullptr) return -1;

  // Primer elemento coincide
  // tiene que ser un while para despues estar seguro que el primer nodo no es == numeroEliminar
  while(head->dato == numeroEliminar) {
    head = head->next;
    ocurrencias++;
  }

  // Ahora que ya se cual es el primer elemento, defino nodoActual
  Node* nodoActual = head;

  //Recorrer lista
  while(nodoActual != nullptr) {
    Node* nodoSiguiente = nodoActual->next;

    // Encontrar ocurrencia 
    // Comprobando que el nodo no sea nullptr
    if(nodoSiguiente != nullptr && nodoSiguiente->dato == numeroEliminar) {
      eliminarNodo(nodoActual, nodoSiguiente);
      ocurrencias++;
    }
    else nodoActual = nodoActual->next;
  }

  // Devuelve la cantidad de ocurrencias
  return ocurrencias;
}

void imprimirLista(Node* head) {
    while (head != nullptr) {
        std::cout << head->dato << std::endl;
        head = head->next;
    }
}

int main() {
  Node* head = new Node(1);
  head->next = new Node(2);
  head->next->next = new Node(3);
  head->next->next->next = new Node(2);
  head->next->next->next->next = new Node(4);
  head->next->next->next->next->next = new Node(2);
  head->next->next->next->next->next->next = new Node(65);
  head->next->next->next->next->next->next->next = new Node(23);

  std::cout << "Lista antes: " << std::endl;
  imprimirLista(head);

  int ocurrencias = eliminarOcurrencias(head, 2);

  std::cout << "Ocurrencias: " << ocurrencias << std::endl;
  std::cout << "Lista después: " << std::endl;
  imprimirLista(head);
}
