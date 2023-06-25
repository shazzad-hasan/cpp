/* Program illustrating the use of 2-D array */ 

/* Program to calculate sum of all elements of a 2-D array */

#include <iostream>
using namespace std;

int const MAX_SIZE = 50;
int main(){
  int  A[MAX_SIZE][MAX_SIZE];
  int rows, cols;
  int i; // row counter
  int j; // col counter

  cout<<"Enter size of the matrix: ";
  cin>>rows>>cols;

  cout<<"Enter elements of the matrix:\n";
  for (i = 0; i < rows; i++){
    for (j = 0; j < cols; j++){
      cin>>A[i][j];
    }
  }

  // calculate sum of all elements
  int sum = 0;
  for (i = 0; i < rows; i++){
    for (j = 0; j < cols; j++){
      sum += A[i][j];
    }
  }

  cout<<"Sum of all elements = "<<sum<<endl;
  
  return 0;
}

