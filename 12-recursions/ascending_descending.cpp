/* This program demonstrates recursion 

The program reads the start and end from the user and prints numbers from 
start to end in an ascending order and then end to start in an descending order. */

#include <iostream>
using namespace std;

void printAscDesc(int start, int end){
  // base case
  if (start == end){
    cout<<start<<endl;
  }
  // recursive step
  else {
    cout<<start<<endl;
    printAscDesc(start+1, end);
    cout<<start<<endl;

  }
}

int main(){
  int start, end;

  cout<<"Enter the start and end (separated by a space, start <= end): ";
  cin>>start>>end;

  printAscDesc(start, end);

  return 0;
}