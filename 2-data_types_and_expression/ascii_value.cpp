/* Write a program that reads from the user a single character,
and prients it's ASCII value. */

#include <iostream>
using namespace std;

int main(){
  char inputChar;
  int asciiValue;

  cout<<"Please enter a character:"<<endl;
  cin>>inputChar;

  asciiValue = (int)inputChar;

  cout<<"The ASCII value of "<<inputChar<<" is "<<asciiValue<<endl;

  return 0;
}