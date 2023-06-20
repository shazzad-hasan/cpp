/* This program demonstrates recursion.

The program reads a non-negative integer from the user
and prints its factorial. */

#include <iostream>
using namespace std;

int fact(int n){
  if (n==0) // base case 1
    return 1;
  else if (n==1) // base case 2
    return 1;
  else // recursive case
    return n * fact(n-1);
}

int main(){
  int n;

  cout<<"Please enter a non-negative integer: ";
  cin>>n;

  if (n < 0)
    cout<<"n must be >= 0"<<endl;
  else 
    cout<<n<<"! = "<<fact(n);

  return 0;
}