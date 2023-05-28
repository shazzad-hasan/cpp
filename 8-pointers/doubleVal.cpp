/* This program demonstrates the use of pointers as function parameters.*/

#include <iostream>
using namespace std;

void getNum(int *input){
  cout<<"Enter an integer number: ";
  cin>>*input;
}

void doubleValue(int *val){
  *val *= 2;
}

int main(){
  int num;

  getNum(&num);
  doubleValue(&num);

  cout<<"That value doubled is "<<num<<endl;

  return 0;
}

