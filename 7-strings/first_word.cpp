/* Write a program that reads from the user 3 words and 
prints the one that comes first in an alphabetical order. */

#include <iostream>
#include <string>
using namespace std;

int main(){
  string w1, w2, w3;

  cout<<"Please enter 3 words (separated by a space): ";
  cin>>w1>>w2>>w3;

  if (w1 <= w2 && w1 <= w3)
    cout<<w1<<endl;
  else if (w2 <= w1 && w2 <= w3)
    cout<<w2<<endl;
  else
    cout<<w3<<endl;
  return 0;
}