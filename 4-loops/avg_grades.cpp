/* Write a program that reads grades of students in a class, and
prints the average. */

#include <iostream>
using namespace std;

int main(){
    int numStudents, i, currGrade, sumGrades;
    double avgGrade;

    cout<<"Please enter the number of students in the class: "<<endl;
    cin>>numStudents;

    sumGrades = 0;
    cout<<"Please enter student's grades (separated by a space): "<<endl;
    for (i=1; i<=numStudents; i++){
        cin>>currGrade;
        sumGrades += currGrade;
    }
    avgGrade = (double)sumGrades / (double)numStudents;
    cout<<"The average is "<<avgGrade<<endl;

    return 0;
}