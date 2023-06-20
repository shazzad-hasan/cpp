// Program to demonstrate pointers and dynamic memory allocation (dynamic array). 

/* Read students' grades, store them in a dynamically allocated memory, 
and print them. */

#include <iostream>
using namespace std;

int main(){

  int numOfStudents;
  double* gradesPtr;
  int i;

  cout<<"Enter total number of students in the class: ";
  cin>>numOfStudents;

  gradesPtr = new double [numOfStudents]; // create numOfStudents doubles on the heap
                                          // dynamically allocated

  cout<<"Enter the grades. "<<endl;
  for (i=0; i<numOfStudents; i++){
    cout<<"Student ["<<i<<"]: ";
    cin>>*(gradesPtr + i);
  }

  cout<<"The grades are: "<<endl;
  for (int i=0; i<numOfStudents; i++){
    cout<<"Student ["<<i+1<<"]: "<<*(gradesPtr+i)<<endl;
  }

  delete[] gradesPtr; //give the memory back
  gradesPtr = nullptr;

  return 0;
}