/* This program  demonstrates 
  1. How to store the address of a variable in a pointer
  2. The use of indirection operator
  */

#include <iostream>
using namespace std;

int main(){
  int x = 5; // int variable
  int* ptr;  // declare a pointer (which will hold a memory address) to a int
             // at this point, ptr's value is bogus!
             // To ensure that we can tell if a pointer has a valid address or not, 
             // it's better to declared pointer to nullptr e.g., int* ptr = nullptr;

  ptr = &x;  // ptr now holds the address of x

  cout<<"Value of x is "<<x<<endl;
  cout<<"Address of x is "<<&x<<endl;
  cout<<"Value of ptr is "<<ptr<<endl;
  cout<<"Value of location pointed by ptr is "<<*ptr<<"\n"<<endl; // displays the contents of x


  *ptr = 50; // assign 50 to the location pointed by ptr (location of x)
             // this will actually assign 50 to x
  cout<<"After assigning 50 to the location pointed by ptr: \n"<<endl;
  cout<<"Value of x is "<<x<<endl;
  cout<<"Address of x is "<<&x<<endl;
  cout<<"Value of ptr is "<<ptr<<endl;
  cout<<"Value of the location pointed by ptr is "<<*ptr<<endl; // displays the contents of x
  

  return 0;
}