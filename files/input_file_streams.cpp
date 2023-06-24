#include <iostream> 
#include <fstream> // incluse fstream for reading and writing to files
using namespace std;

int main(){
  ifstream myFile; // declare input-stream variable
  int numOfStudents, currentScore, sum;
  double avgScore;

  // open the file
  myFile.open("scores.txt");

  // check that file was opened
  if (!myFile){
    cout<<"Unable to open file."<<endl;
    return 0;
  } 

  // get file inputs and calculate the sum
  numOfStudents = 0;
  sum = 0;
  while (myFile >> currentScore){
    sum += currentScore;
    numOfStudents += 1;
  }
  // close the file
  myFile.close();

  // calculate the average
  avgScore = sum / numOfStudents;
  cout<<"The class average is "<<avgScore<<endl;

  return 0;
}