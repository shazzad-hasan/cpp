#include <iostream>
#include <fstream>
#include <string>
#include <climits>
using namespace std;

int main(){
  ofstream myFile;
  string filename;
  string text;

  cout<<"Please enter file name: ";
  cin>>filename;
  cin.ignore(INT_MAX, '\n');

  cout<<"Please enter the text: ";
  getline(cin, text);

  myFile.open(filename);

  if (!myFile){
    cout<<"Unable to open file."<<endl;
    return 0;
  } 
  else {
    myFile<<text<<endl;
    myFile<<"This the last line."<<endl;
  }

  myFile.close();

  return 0;
}
