/* Write a program that reads a string from the user and
prints it in a reverse order. */

#include <iostream>
#include <string>
using namespace std;

int main(){
  string str1, rev_str;
  int i;

  cout<<"Please write something: "<<endl;
  getline(cin, str1);

  rev_str = "";
  for (i = str1.length()-1; i >= 0; i--){
    rev_str += str1[i];
  }

  cout<<rev_str<<endl;

  return 0;
}