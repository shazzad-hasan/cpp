/* This program demonstrates the use of pointers with arrays.*/

#include <iostream>
using namespace std;

const int MAX_ARRAY_SIZE = 50;

int main(){
  int numbers[MAX_ARRAY_SIZE];
  int *numPtr;
  int size, i;

  cout<<"Please enter how many numbers you would like to input: ";
  cin>>size;

  cout<<"Please enter 5 numbers (separated by a space): ";
  for (i=0; i<size; i++){
    cin>>numbers[i];
  }

  numPtr = numbers;

  cout<<"The first element of the array is ";
  cout<<*numbers<<endl; // array name being dereferenced with * operator

  cout<<"Array elements: ";
  for (i=0; i<size; i++){
    cout<<*(numbers+i)<<" "; // pointer notation with the array name
  }
  cout<<endl;

  cout<<"Array elements: ";
  for (i=0; i<size; i++){
    cout<<numPtr[i]<<" "; // subscripts with the pointer
  }
  cout<<endl;

  cout<<"Array elements: ";
  for (i=0; i<size; i++){
    cout<<*numPtr<<" ";
    numPtr++; 
  }
  cout<<endl;

  cout<<"Array elements in reverse order: ";
  for (i=0; i<size; i++){
    numPtr--;
    cout<<*numPtr<<" ";
  }
  cout<<endl;

  return 0;
}