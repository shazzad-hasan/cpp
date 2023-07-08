/* Program illustrating the use of struct as function parameter */

#include <iostream>
#include <string>
using namespace std;

struct Student {
    string first_name;
    string last_name;
    string department;
    double gpa;
};

Student getStudent(){
    Student s;

    cout<<"Enter first name: ";
    cin>>s.first_name;
    cout<<"Enter last name: ";
    cin>>s.last_name;
    cout<<"Enter department: ";
    cin>>s.department;
    cout<<"Enter current GPA: ";
    cin>>s.gpa;

    return s;
};

void displayInfo(Student& s){
    cout<<s.first_name<<" "<<s.last_name<<" has a GPA of "<<s.gpa<<endl;
}

int main(){

    Student s1 = {"Jon", "Snow", "CS", 3.33};
    Student s2 = getStudent();

    if (s1.first_name == s2.first_name 
        && s1.last_name == s2.last_name 
        &&s1.department == s2.department
        && s1.gpa == s2.gpa){
        
        cout<<"The two students are the same."<<endl;
        displayInfo(s1);
    } else {
        displayInfo(s2);
    }

    return 0;
}