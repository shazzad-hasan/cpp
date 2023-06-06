/* This program demonstrates recursion.

The program reads a positive integer n from the user
and prints fibonacci sequence up to Fn (nth Fibonacci number). */

#include <iostream>
using namespace std;

int fib(int n){
  if (n <= 1){ 
    // base case
    return n;
  }
  else {
    // recursive case
    return fib(n-1) + fib(n-2);
  }
}

int main(){
  int n;

  cout<<"Please enter number of terms: ";
  cin>>n;

  if (n < 0){
    cout<<"Illegal input, please enter an integer >= 0"<<endl;
  }
  else{
    cout<<"Fibonacci sequence of order "<<n<<":"<<endl;
    for (int i=0; i<=n; i++){
      cout<<fib(i)<<endl;
    }
  }

  return 0;
}