#include <iostream>

struct Node {
  int dato;
  Node* next = nullptr;
};

void addNode(Node*& head, int dato) {
  Node* nodoNuevo = new Node;
  nodoNuevo->dato = dato;
  if(head == nullptr) {
    head = nodoNuevo;
    head->next = head;
  } else {
    Node* tNode = head;
    while(tNode->next != head) tNode = tNode->next;
    tNode->next = nodoNuevo;
    nodoNuevo->next = head;
  }
}

void printList(Node* head) {
  Node* tNode = head;
  while(tNode->next != head) {
    std::cout << "Data: " << tNode->dato << std::endl;
    tNode = tNode->next;
  }
}

int main() {
  Node* head = nullptr;
  addNode(head, 1);
  addNode(head, 2);
  addNode(head, 3);
  addNode(head, 4);
  addNode(head, 5);
  addNode(head, 6);
  addNode(head, 7);
  
  printList(head);
}
