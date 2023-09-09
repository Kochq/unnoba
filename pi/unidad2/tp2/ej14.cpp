#include <iostream>

int main() {
  bool simetrica = 1;
  int matrix[3][3] = { 
    {1,2,3},
    {2,5,0},
    {3,0,5},
  };


for(int i = 0; i<3; i++) {
  for(int j = 0; j<3; j++) {
    if(matrix[i][j] != matrix[j][i]) {
      simetrica = 0;
      break;
    } 
  }
}

if(simetrica) std::cout<<"Es simetrica!!!!";
else std::cout<<"No es simetrica :C";
}
