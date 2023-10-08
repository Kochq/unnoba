#include <iostream>
#include <string>

struct Node {
  std::string dato;
  Node* next = nullptr;
  Node(std::string data) : dato(data), next(nullptr) {}
};

void imprimirLista(Node* head);
// Esta funcion devuelve un puntero a un Node
Node* merge(Node*& lista1, Node*& lista2);

int main() {
  Node* head1 = new Node("Algo");
  head1->next = new Node("Bueno");
  head1->next->next = new Node("Comida");
  head1->next->next->next = new Node("Dados");

  Node* head2 = new Node("Grande");
  head2->next = new Node("Holanda");
  head2->next->next = new Node("Irrigar");
  head2->next->next->next = new Node("Jugar");

  Node* mergedList = merge(head1, head2);
  imprimirLista(mergedList);
}

void imprimirLista(Node* head) {
    Node* nodoActual = head;
    while (nodoActual != nullptr) {
        std::cout << nodoActual->dato << std::endl;
        nodoActual = nodoActual->next;
    }
}

Node* merge(Node*& lista1, Node*& lista2) {
  Node* mergeList = nullptr;
  Node* tailMergeList = nullptr;
  Node* tNode1 = lista1;
  Node* tNode2 = lista2;
  
  while (lista1 != nullptr && lista2 != nullptr) {
    if(lista1->dato <= lista2->dato) {
      if(mergeList == nullptr) mergeList = tailMergeList = lista1;
      else {
        tailMergeList->next = lista1;
        tailMergeList = tailMergeList->next;
      }
      lista1 = lista1->next;
    }else {
      if(mergeList == nullptr) mergeList = tailMergeList = lista2;
      else {
        tailMergeList->next = lista2;
        tailMergeList = tailMergeList->next;
      }
      lista2 = lista2->next;
    }
  }

  if(lista1 != nullptr) tailMergeList->next = lista1;
  else tailMergeList->next = lista2;

  return mergeList;
}
