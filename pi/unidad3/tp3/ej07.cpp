#include <iostream>

struct Node {
  int data;
  Node* next = nullptr;
};

struct SearchResult {
  bool found = false;
  Node* nodeFinded = nullptr;
};

void addNode(Node*& head, Node*& last, int n);
void printList(Node* head);
void createList(Node*& head, Node*& last);
SearchResult searchNumberOnList(Node* head, int n);
int numberOcurrences(Node* head, int n);
void newEvenAndOddLists(Node* head);

int main() {
  Node* head = nullptr;
  Node* last = nullptr;
  int n;

  createList(head, last);

  //A)
  std::cout << "Search for a number: ";
  std::cin >> n;

  SearchResult search = searchNumberOnList(head, n);
  if(search.found) std::cout << "The number is on the list!!!" << std::endl;

  //B)
  std::cout << "Search for the ocurrences of a number: ";
  std::cin >> n;

  int ocurrences = numberOcurrences(head, n);

  std::cout << "The number " << n << " appears " << ocurrences << " times" << std::endl;

  //C)
  newEvenAndOddLists(head);
}

void addNode(Node*& head, Node*& last, int n) {
  Node* newNode = new Node;
  newNode->data = n;

  if(head == nullptr) {
    head = newNode;
    last = newNode;
  } else {
    last->next = newNode;
    last = newNode;
  }
}

void createList(Node*& head, Node*& last) {
  int n;
  do {
    std::cout << "Enter a positive number: ";
    std::cin >> n;
    if(n < 0) break;

    addNode(head, last, n);
  }while(n >= 0);
}

SearchResult searchNumberOnList(Node* head, int n) {
  Node* tNode = head;

  while(tNode != nullptr) {
    // If the node has the number that we are looking for, return true and the address of the node
    if(tNode->data == n) return {true, tNode};
    tNode = tNode->next;
  }

  return {false, nullptr};
}

int numberOcurrences(Node* head, int n) {
  Node* tNode = head;
  int ocurrences = 0;

  while(tNode != nullptr) {
    // Search if the number is in the list from tNode to end of the list
    SearchResult search = searchNumberOnList(tNode, n);

    // If the number is in the list
    if(search.found) ocurrences++;

    // We have to check if the actual node isn't null because trying to check the ->next of a nullptr ends up on a segmentation fault
    // Also if the node that we found is null then we already check the last one
    if(search.nodeFinded == nullptr) break;
    tNode = search.nodeFinded->next;
  }

  return ocurrences;
}

void printList(Node* head) {
  Node* tNode = head;
  while(tNode != nullptr) {
    std::cout << "Data: " << tNode->data << std::endl;
    tNode = tNode->next;
  }
}

void newEvenAndOddLists(Node* head) {
  Node* tNode = head;
  Node* evenHead = nullptr;
  Node* evenLast = nullptr;
  Node* oddHead = nullptr;
  Node* oddLast = nullptr;

  while(tNode != nullptr) {
    // If it's even
    if(tNode->data % 2 == 0) addNode(evenHead, evenLast, tNode->data);
    // If it's odd
    else addNode(oddHead, oddLast, tNode->data);

    tNode = tNode->next;
  }

  std::cout << "EVEN LIST" << std::endl;
  printList(evenHead);
  std::cout << "ODD LIST" << std::endl;
  printList(oddHead);
}

