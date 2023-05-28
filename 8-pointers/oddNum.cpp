/* This program demonstrates returning pointers from function.*/

#include <iostream>
using namespace std;
   
// This function returns an array of N odd numbers
int* getOddNumbers(int N){
  // Declaration of a static local integer array 
  static int oddNumberArray[100];
  int i, odd = 1;
      
  for(i=0; i<N; i++){
      oddNumberArray[i] = odd;
      odd += 2;
  }
  // Returning base address of oddNumberArray array
  // As oddNumberArray is a static variable, it will 
  // retain it's value even after function exits 
  return oddNumberArray;
}
   
int main(){
  int *array, counter;
  
  array = getOddNumbers(10);
  cout << "Odd Numbers\n";
    
  for(counter=0; counter<10; counter++){
      cout << array[counter] << " ";
  }

  return 0;
} 