#include <iostream>

int sumarPares(int arr[], int length, int index = 0, int suma = 0) {
  if(index == length) return suma;
  if(arr[index] % 2 == 0) suma += arr[index];
  return sumarPares(arr, length, index+1, suma);
}

int main() {
  int arr[] = {1,2,3,4,5,6,7};

  std::cout << sumarPares(arr, 7);

  return 0;
}
