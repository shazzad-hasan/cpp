/* Program illustrating the use of 2-D array */ 

/* Program to add two 2-D arrays */

#include <iostream>
using namespace std;

void matAdd(int a[][3], int b[][3], int rows, int cols, int result[][3]){
  for (int i = 0; i < rows; i++){
    for (int j = 0; j < cols; j++){
      result[i][j] = a[i][j] + b[i][j];
    }
  }
}

int main(){
  int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int b[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int result[3][3];
  
  matAdd(a, b, 3, 3, result);

  cout<<"The sum is:\n";

  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      cout<<result[i][j]<<" ";
    }
    cout<<endl;
  }

  return 0;
}