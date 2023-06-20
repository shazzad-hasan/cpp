/* Write a program that reads a text from the user, and prints the
 number of vowels in it. */

#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

bool isVowel(char ch){
  ch = tolower(ch); // converts a given char to lowercase
  return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
}

int main(){
  string inputText;
  vector<char> vowels;

  cout<<"PLease enter some tex: ";
  getline(cin, inputText);
 
  // for-each loop
  for (char ch:inputText){ 
    if (isVowel(ch))
      vowels.push_back(ch);
  }

  cout<<"Number of vowels = "<<vowels.size()<<endl;

  return 0;
}
