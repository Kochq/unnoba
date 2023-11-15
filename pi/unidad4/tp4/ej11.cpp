#include <iostream>

int encontrarImpar(int arr[], int length, int index = 0) {
  if(index == length) return 0;
  if(arr[index] % 2 != 0) return arr[index];
  return encontrarImpar(arr, length, index+1);
}

int main() {
  int arr[] = {4,2,4,4,4,6,7};

  std::cout << encontrarImpar(arr, 7);

  return 0;
}
