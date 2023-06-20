/* This program demonstrates the use of pointers as function parameters.*/

#include <iostream>
using namespace std;

const int MAX_ARRAY_SIZE = 50;
void getMinMax(int numbers[], int size, int* min, int* max);

int main(){

  int numbers[MAX_ARRAY_SIZE];
  int size, i;

  cout<<"Please enter how many numbers you would like to input: ";
  cin>>size;

  cout<<"Please enter 5 numbers (separated by a space): ";
    for (i=0; i<size; i++){
      cin>>numbers[i];
    }

  int min = numbers[0];
  int max = numbers[0];

  getMinMax(numbers, size, &min, &max);

  cout<<"Min = "<<min<<endl;
  cout<<"Max = "<<max<<endl;

  return 0;
}

void getMinMax(int numbers[], int size, int* min, int* max){
  int i;
  
  for (i=1; i<size; i++){
    if (numbers[i] < *min){
      *min = numbers[i];
    }
    if (numbers[i] > *max){
      *max = numbers[i];
    }
  }
}