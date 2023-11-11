#include <iostream>

struct Node {
  int dato;
  Node* next = nullptr;
};

// Exactamente la misma funcion que el 5)c) pero cambiando el < por el >
void insertarEnOrden(Node*& head, int numero) {
  Node* n = new Node;

  n->dato = numero;
  
  if(head == nullptr || n->dato > head->dato) {
    n->next = head;
    head = n;
  } else {
    Node* t = head;
    while(t->next != nullptr && t->next->dato > numero) {
      t = t->next;
    }
    n->next = t->next;
    t->next = n;
  }
}

// Exactamente la misma funcion que el 8)
void eliminarNodo(Node*& nodoAnt, Node*& nodoEliminar) { 
  if(nodoEliminar->next == nullptr) {
    nodoAnt->next = nullptr;
    delete nodoEliminar;
  } else {
    nodoAnt->next = nodoEliminar->next;
    delete nodoEliminar;
  }
}

// Exactamente la misma funcion que el 8) pero cambiando el numeroEliminar por 3
void eliminarOcurrencias(Node*& head) {
  int ocurrencias = 0;

  if(head == nullptr) return;

  while(head->dato == 3) head = head->next;

  Node* nodoActual = head;

  while(nodoActual != nullptr) {
    Node* nodoSiguiente = nodoActual->next;

    if(nodoSiguiente != nullptr && nodoSiguiente->dato == 3) eliminarNodo(nodoActual, nodoSiguiente);
    else nodoActual = nodoActual->next;
  }
}

void mostrarLista(Node* head) {
  while(head != nullptr) {
    std::cout << "Dato: " << head->dato << std::endl;
    head = head->next;
  }
}

int main() {
  Node* head = nullptr;
  int numero;
  do {
    std::cout << "Ingrese un numero entero: ";
    std::cin >> numero;

    insertarEnOrden(head, numero);

  } while(numero != 0);

  std::cout << "Lista antes: " << std::endl;
  mostrarLista(head);

  eliminarOcurrencias(head);

  std::cout << "Lista después: " << std::endl;
  mostrarLista(head);
}
