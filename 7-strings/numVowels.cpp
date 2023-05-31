/* Write a program that reads a text from the user, and prints the
 number of vowels in it. */

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isVowel(char ch){
  ch = tolower(ch); // converts a given char to lowercase
  return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
}

int main(){
  string inputText;
  int count;

  cout<<"PLease enter some tex: ";
  getline(cin, inputText);
 
  // for-each loop
  for (char ch:inputText){ 
    if (isVowel(ch))
      count++;
  }

  cout<<"Number of vowels = "<<count<<endl;

  return 0;
}
