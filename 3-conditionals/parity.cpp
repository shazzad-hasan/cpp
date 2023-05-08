/* Write a program that reads from the user a positive integer, 
and determines whether it's even or odd.*/

#include <iostream>
using namespace std;

int main(){
  int userInput;

  cout<<"Please enter a positive integer:"<<endl;
  cin>>userInput;

  if (userInput % 2 == 0){
    cout<<userInput<<" is even"<<endl;
  }
  else{
    cout<<userInput<<" is odd"<<endl;
  }

  return 0;
}