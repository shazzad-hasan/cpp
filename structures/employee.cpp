/* Program illustrating nested structures in C++ */

#include <iostream>
#include <string>
using namespace std;

struct family {
    string father;
    string mother;
    int numOfSiblings;
    char maritalStatus[10];
};

struct dateOfBirth {
    int day;
    int month;
    int year;
};

struct employee {
    string name;
    dateOfBirth dob;
    int age;
    double salary;
    family f;
};


int main(){
    employee emp;

    cout<<"Name: ";
    getline(cin, emp.name);
    cout<<"Age: ";
    cin>>emp.age;
    cout<<"Date of birth (dd mm yy): ";
    cin>>emp.dob.day>>emp.dob.month>>emp.dob.year;
    cout<<"Salary: ";
    cin>>emp.salary; 
    cout<<"Father's name: ";
    cin>>ws; // stream out any whitespace
    getline(cin, emp.f.father);   
    cout<<"Mother's name: ";
    getline(cin, emp.f.mother);
    cout<<"Number of siblings: ";
    cin>>emp.f.numOfSiblings;
    cout<<"Marital stauts: ";
    cin>>emp.f.maritalStatus;

    cout<<"\nEmployee information: "<<endl;
    cout<<"Name: "<<emp.name<<endl;
    cout<<"Date of birth: "<<emp.dob.day<<"/"<<emp.dob.month<<"/"<<emp.dob.year<<endl;
    cout<<"Age: "<<emp.age<<endl;
    cout<<"Salary: "<<emp.salary<<endl;
    cout<<"Father's name: "<<emp.f.father<<endl;
    cout<<"Mother's name: "<<emp.f.mother<<endl;
    cout<<"Number of siblings: "<<emp.f.numOfSiblings<<endl;
    cout<<"Marital status: "<<emp.f.maritalStatus<<endl;

    return 0;
}