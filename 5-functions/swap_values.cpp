/* Write a program that reads from the user two numbers
and prints their swaped values. */

#include <iostream>
using namespace std;

void swap(int &a, int &b);

int main(){
  int a, b;
  cout<<"Please enter two numbers (separated by a space):"<<endl;
  cin>>a>>b;

  cout<<"Before: a = "<<a<<", b = "<<b<<endl;
  swap(a, b);
  cout<<"After: a = "<<a<<", b = "<<b<<endl;
  return 0;
}

// function definition, pass-by reference
void swap(int &a, int &b){
  int temp;
  temp = a;
  a = b;
  b = temp;
}


