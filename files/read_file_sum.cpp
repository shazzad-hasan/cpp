/* This program reads integers from a file and prints their sum. */

#include <iostream>
#include <fstream>
using namespace std;

int main(){
  fstream inFile; // declare file-stream variable
  int x;
  int sum = 0;

  // open file in read mode
  inFile.open("integers.txt", ios::in);

  // check if file was opened
  if (inFile.is_open()){
    // get file inputs and calculate the sum
    while (inFile >> x){
      sum += x;
    }
  } else {
    cout<<"Unable to open file";
    exit(1); // terminate with error
  }
  // close the file
  inFile.close();

  cout<<"Sum = "<<sum<<endl;

  return 0;
}