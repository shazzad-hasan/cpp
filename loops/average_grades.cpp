/* Write a program that reads grades of students in a class, and
prints the average. */

#include <iostream>
using namespace std;

int main(){
    int currGrade, sumGrades, numStudents;
    bool seenEndOfInput;
    double avgGrade;

    cout<<"Please enter the grades separated by a space"<<endl;
    cout<<"and end the sequence by typing -1:"<<endl;

    sumGrades = 0;
    numStudents = 0;
    seenEndOfInput = false;

    while (seenEndOfInput == false){
        cin>>currGrade;
        if (currGrade == -1){
            seenEndOfInput = true;
        }
        else {
            sumGrades += currGrade;
            numStudents++;
        }
    }
    avgGrade = (double)sumGrades / (double)numStudents;
    cout<<"The average is "<<avgGrade<<endl;

    return 0;
}