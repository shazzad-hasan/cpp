/* Write a program that reads a positive integer num, and prints
the number of digits in num and their sum. */

#include <iostream>
using namespace std;

int main(){
    int num, countDigits, sumDigits, tempNum,currDigit;

    cout<<"Please enter a positive integer: ";
    cin>>num;

    tempNum = num;
    countDigits = 0;
    sumDigits = 0;
    while (tempNum > 0){
        currDigit = tempNum % 10;
        countDigits++;
        sumDigits += currDigit;
        tempNum = tempNum / 10;
    }
    cout<<num<<" has "<<countDigits<<" digits";
    cout<<" and their sum is "<<sumDigits<<endl;

    return 0;
}