#include <iostream>

int sumarPares(int arr[], int length, int index = 0, int suma = 0) {
  if(index == length) return suma;
  return sumarPares(arr, length, index+1, suma + arr[index]);
}

int main() {
  int arr[] = {5,2,1,9};

  std::cout << sumarPares(arr, 4);

  return 0;
}
