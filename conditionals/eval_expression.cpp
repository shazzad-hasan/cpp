/* Write a program that reads from the user a simple mathematical expression
and prints its value. */

#include <iostream>
using namespace std;

int main(){
    double arg1, arg2, result;
    char op;

    cout<<"Please enter an expression of the form arg1 op arg2:"<<endl;
    cin>>arg1>>op>>arg2;

    switch(op){
        case '+':
            result = arg1 + arg2;
            cout<<arg1<<op<<arg2<<"="<<result<<endl;
            break;
        case '-':
            result = arg1 - arg2;
            cout<<arg1<<op<<arg2<<"="<<result<<endl;
            break;
        case '*':
            result = arg1 * arg2;
            cout<<arg1<<op<<arg2<<"="<<result<<endl;
            break;
        case '/':
            if (arg2 != 0){
                result = arg1 / arg2;
                cout<<arg1<<op<<arg2<<"="<<result<<endl;
            }
            else 
                cout<<"Ilegal expression"<<endl;
            break;
        default:
            cout<<"Ilegal expression"<<endl;
            break;
    }

    return 0;
}