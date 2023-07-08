/* Program illustrating structure data type in C++ */ 

#include <iostream>
#include <string>
using namespace std;

struct person {     // structure declaration
    string name;    // member 
    int age;        // member
    double weight;  // member
};

int main(){
    person p;
    cout<<"Enter your name: ";
    getline(cin, p.name);
    cout<<"Enter your age: ";
    cin>>p.age;
    cout<<"Enter your weight: ";
    cin>>p.weight;

    cout<<"\nInformation provided:"<<endl;
    cout<<"Name: "<<p.name<<endl;
    cout<<"Age: "<<p.age<<endl;
    cout<<"Weight: "<<p.weight<<endl;

    return 0;
}