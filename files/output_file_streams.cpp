#include <iostream>
#include <fstream> // incluse fstream for reading and writing to files
#include <string>
#include <climits>
using namespace std;

int main(){
  ofstream myFile; // declare output-stream variable
  string filename;
  string text;

  cout<<"Please enter file name: ";
  cin>>filename;
  cin.ignore(INT_MAX, '\n');

  cout<<"Please enter the text: ";
  getline(cin, text);

  // open the file to write to
  myFile.open(filename);

  // check that file was opened
  if (!myFile){
    cout<<"Unable to open file."<<endl;
    return 0;
  } 
  else { // write text to the file
    myFile<<text<<endl;
    myFile<<"This the last line."<<endl;
  }

  // close the file
  myFile.close();

  return 0;
}
