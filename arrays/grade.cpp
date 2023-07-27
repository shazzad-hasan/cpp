// Program to illustrate C++ array data structure.

/* Write a program that reads grades of students in a class,
prints the average and the grades above the average. */

#include <iostream>
using namespace std;

const int MAX_CLASS_SIZE = 60;
int main(){
  int numOfStudents, grade, sum;
  int gradeList[MAX_CLASS_SIZE];
  double avgGrade;

  cout<<"Enter the number of students in the class (no more than "<<MAX_CLASS_SIZE<<")"<<endl;
  cin>>numOfStudents;

  // read the grades
  cout<<"Enter student's grades (separated by a space)"<<endl;
  for (int i = 0; i < numOfStudents; i++){
    cin>>grade;
    gradeList[i] = grade;
  }

  // calculate the average
  sum = 0;
  for (int i = 0; i < numOfStudents; i++){
    sum += gradeList[i];
  }
  
  avgGrade = (double)sum / (double)numOfStudents;
  cout<<"The class average is "<<avgGrade<<endl;

  // print grades above the average grade
  cout<<"The grades above the average are: ";
  for (int i = 0; i < numOfStudents; i++){
    if (gradeList[i] > avgGrade)
      cout<<gradeList[i]<<" ";
  }
  cout<<endl;

  return 0;
}