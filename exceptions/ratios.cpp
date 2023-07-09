/* Program illustrating exception handling */

#include <iostream>
using namespace std;

int main(){
    double numerator, denominator, result;

    cout<<"Enter numerator: ";
    cin>>numerator;
    cout<<"Enter denomerator: ";
    cin>>denominator;

    try {
        if (denominator == 0){
            throw 0;
        }

        result = numerator / denominator;
        cout<<numerator<<"/"<<denominator<<"="<<result<<endl;
    }
    catch (int e) {
        cout<<"Zero division error"<<endl;
        cout<<"Can't divide by "<<e<<endl;
    }

    return 0;
}