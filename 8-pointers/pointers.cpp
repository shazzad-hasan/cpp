/* This program  demonstrates 
  1. How to store the address of a variable in a pointer
  2. The use of * (dereferencing / indirection operator)
  3. Use of * to set the value of the pointee (the variable being pointed to)
  */

#include <iostream>
using namespace std;

int main(){
  int x = 5; // int variable
  int* ptr;  // declare a pointer (which will hold a memory address) to a int
             // at this point, ptr's value is bogus!
  ptr = &x;  // ptr now holds the address of x

  cout<<"Value of x is "<<x<<endl;
  cout<<"Address of x is "<<&x<<endl;
  cout<<"Value of ptr is "<<ptr<<endl;
  cout<<"Value of the variable pointed by ptr is "<<*ptr<<endl; // displays the contents of x


  // Assign 50 to the location pointed by ptr (location of x), this will actually assign 50 to x
  *ptr = 50;

  cout<<"\nValue of x is "<<x<<endl;
  cout<<"Address of x is "<<&x<<endl;
  cout<<"Value of ptr is "<<ptr<<endl;
  cout<<"Value of the variable pointed by ptr is "<<*ptr<<endl; // displays the contents of x

  // If you set one pointer equal to another pointer, they both point to the same variable!
  string s = "cat";
  string* sPtr1 = &s;
  string* sPtr2 = nullptr; // To ensure that we can tell if a pointer has a valid address or not, 
                           // it's better to declared pointer to nullptr e.g., int* ptr = nullptr;
  
  cout<<"\nValue of s is "<<s<<endl;
  cout<<"Address of s is "<<&s<<endl;
  cout<<"Value of sPtr1 is "<<sPtr1<<endl;
  cout<<"Value of the variable pointed by sPtr1 is "<<*sPtr1<<endl;

  sPtr2 = sPtr1;
  cout<<"Value of sPtr2 is "<<sPtr2<<endl;
  cout<<"Value of the variable pointed by sPtr2 is "<<*sPtr1<<endl;

  // void pointer
  void *pv;
  int *intPtr = nullptr;
  int i = 10;

  pv = &i;
  intPtr = (int*)pv; //void pointer can't be dereferenced unless it's cast to another type
  cout<<"\n"<<endl;
  cout<<intPtr<<endl; 
  cout<<*intPtr<<endl;

  return 0;
}