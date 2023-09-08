#include <iostream>
#include <string>

const int MAX = 10;

///////////////////Esto es lo que agregue yo////////////////////////
int cantidad_ocurrencias(int arreglo[], short largo, int target) { 
  int ocurrencias = 0;

  for (int i=0; i<largo; i++) {
    if (arreglo[i] == target) ocurrencias++;
  }

  return ocurrencias;
}
///////////////////Esto es lo que agregue yo////////////////////////

int main() {
  int A[MAX] = {2,8,5,2,2,7,2,7,4,2};
  int B[MAX];
  int C[MAX] = {2};
  int D[MAX] = {2,2,2};
  int E[MAX] = {1,3,5,7,9};
  short dlA=10, dlB=0, dlC=1, dlD=3, dlE=5;
  std::cout << cantidad_ocurrencias(A, dlA, 2) << std::endl;
  std::cout << cantidad_ocurrencias(B, dlB, 2) << std::endl;
  std::cout << cantidad_ocurrencias(C, dlC, 2) << std::endl;
  std::cout << cantidad_ocurrencias(D, dlD, 2) << std::endl;
  std::cout << cantidad_ocurrencias(E, dlE, 2) << std::endl;
}
