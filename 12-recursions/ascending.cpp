/* This program demonstrates recursion 

The program reads the start and end from the user and prints numbers 
from start to end in an ascending order. */

#include <iostream>
using namespace std;

void printAsc(int start, int end){
  // base case
  if (start == end){
    cout<<start<<endl;
  }
  // recursive step
  else {
    int mid;
    // // sol'n 1
    printAsc(start, end-1);
    cout<<end<<endl;

    // // sol'n 2
    // cout<<start<<endl;
    // printAsc(start+1, end);

    // sol'n 3
    // mid = (start+end)/2;
    // printAsc(start, mid);
    // printAsc(mid+1, end);
  }
}

int main(){
  int start, end;

  cout<<"Enter the start and end (separated by a space, start <= end): ";
  cin>>start>>end;

  printAsc(start, end);

  return 0;
}