#include <iostream>

struct Node {
  int dato;
  Node* next;
  Node(int valor) : dato(valor), next(nullptr) {} // Esto es solo para no tener que meter datos por teclado
};

bool tienenMismaLong(Node* list1, Node* list2) {
  if (list1 == nullptr && list2 == nullptr) return true; // Si llegamos al final a la vez son de la misma long
  if (list1 == nullptr || list2 == nullptr) return false; // Si no, no
  return tienenMismaLong(list1->next, list2->next); // iterar
}

int main() {
  Node* list1 = new Node(1);
  list1->next = new Node(2);
  list1->next->next = new Node(3);

  Node* list2 = new Node(4);
  list2->next = new Node(5);
  list2->next->next = new Node(6);

  std::cout << tienenMismaLong(list1, list2);

  return 0;
}

