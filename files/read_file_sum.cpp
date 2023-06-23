/* This program reads integers from a file and prints their sum. */

#include <iostream>
#include <fstream>
using namespace std;

int main(){
  fstream inFile;
  int x;
  int sum = 0;

  inFile.open("test.txt", ios::in);

  if (inFile.is_open()){
    while (inFile >> x){
      sum += x;
    }
  } else {
    cout<<"Unable to open file";
    exit(1); // terminate with error
  }
  inFile.close();
  cout<<"Sum = "<<sum<<endl;

  return 0;
}