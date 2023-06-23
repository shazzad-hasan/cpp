#include <iostream>
#include <fstream> //include fstream for file operations
#include <string>
using namespace std;

int main(){

  /* Create and Write to a file */

  //declare an object of fstream class
  fstream myFile;

  //open file "myfile.txt" in out (write) mode
  myFile.open("myfile.txt", ios::out);

  //check that the file was opened
  if (myFile.is_open()){
    // write to the file
    myFile<<"Hello\n";
    myFile<<"World\n";

    //close the file
    myFile.close();
  }

  //open file "myfile.txt" in app (append) mode
  myFile.open("myfile.txt", ios::app);

  if (myFile.is_open()){
    myFile<<"Hello\n";
    myFile<<"Again\n";

    myFile.close();
  }

  /* Read the file */

  //open file "myfile.txt" in in (read) mode
  myFile.open("myfile.txt", ios::in);

  if (myFile.is_open()){
    string line;
    while (getline(myFile, line)){
      cout<<line<<endl;
    }
    myFile.close();
  }

  return 0;
}