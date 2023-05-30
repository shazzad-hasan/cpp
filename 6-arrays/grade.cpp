/* Write a program that reads grades of students in a class,
prints the average and the grades above the average. */

#include <iostream>
using namespace std;

const int MAX_CLASS_SIZE = 60;
int main(){
  int numOfStudents, currentGrade, sum;
  int i, j, ind;
  int gradeList[MAX_CLASS_SIZE];
  double avgGrade;

  cout<<"Please enter number of students in the class (no more than "<<MAX_CLASS_SIZE<<")"<<endl;
  cin>>numOfStudents;

  // read the grades
  cout<<"Please enter the grades (separated by a space)"<<endl;
  for (i = 0; i < numOfStudents; i++){
    cin>>currentGrade;
    gradeList[i] = currentGrade;
  }

  // calculate the average
  sum = 0;
  for (j = 0; j < numOfStudents; j++){
    sum += gradeList[j];
  }
  avgGrade = (double)sum / (double)numOfStudents;
  cout<<"The class average is "<<avgGrade<<endl;

  // print grades above the average grade
  cout<<"The grades above the average are: ";
  for (ind = 0; ind < numOfStudents; ind++){
    if (gradeList[ind] > avgGrade)
      cout<<gradeList[ind]<<" ";
  }
  cout<<endl;


  return 0;
}