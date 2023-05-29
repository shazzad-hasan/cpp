//Program to demonstrate pointers and dynamic memory allocation.


#include <iostream>
using namespace std;

int main(){

  double* sales;
  double total, avg;
  int numOfDays, i;

  cout<<"How many days? ";
  cin>>numOfDays;

  sales = new double[numOfDays]; // create numOfDays doubles on the heap
                                 // dynamically allocated

  cout<<"Enter sales figures. "<<endl;
  for (i=0; i<numOfDays; i++){
    cout<<"Day "<<(i+1)<<": $";
    cin>>sales[i];
  }

  for (i=0; i<numOfDays; i++){
    total += sales[i];
  }

  avg = total / numOfDays;

  cout<<"Total Sales: $"<<total<<endl;
  cout<<"Average Sales: $"<<avg<<endl;

  delete[] sales; //free dynamically allocated memory
  sales = nullptr;

  return 0;
}

