/* Write a program that reads from the user an integer, and
prints it's absolute value. */

#include <iostream>
using namespace std;

int main(){
  int userInput, absValue;

  cout<<"Please enter an integer:"<<endl;
  cin>>userInput;

  absValue = userInput;

  if (userInput < 0)
    absValue = userInput * (-1);

  cout<<"|"<<userInput<<"| = "<<absValue<<endl;

  return 0;
}