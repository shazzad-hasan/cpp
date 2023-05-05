#include <iostream>
#include <string>
using namespace std;

int main(){
  string s, name;
  
  cout<<"Please write you name:"<<endl;
  getline(cin, name);

  s = "Hello";

  cout<< s + ", world! " << "This is "<<name<<endl;

  return 0;
}