/* Program illustrating exception handling */

#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Please enter your age: ";
    cin>>age;

    try {
        if (age >= 18){
            cout<<"Access granted."<<endl;
        } else {
            throw (age);
            // throw 505;
        }
    }
    catch (...) // handle any type of exception
    {
        cout<<"Access denied. You must be at least 18 years old."<<endl;
    }

    return 0;
}