#include <iostream>
using namespace std;

struct Person {     // structure declaration
    string name;    // member 
    int age;        // member
    double weight;  // member
};

int main(){
    Person p;
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