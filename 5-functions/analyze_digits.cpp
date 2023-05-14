/* Write a program that reads from the user a positive integer num,
and prints the number of digits in the num and their sum. */

#include <iostream>
using namespace std;

int analyzeDigits(int num, int &sumDigits);

int main(){
  int num, sumDigits, numDigits;

  cout<<"Please enter a positive interger number:"<<endl;
  cin>>num;

  numDigits = analyzeDigits(num, sumDigits);

  cout<<num<<" has "<<numDigits<<" digits and their sum is "<<sumDigits<<endl;

  return 0;
}

int analyzeDigits(int num, int &sumDigits){
  int countDigits, currentDigit;

  countDigits = 0;
  while (num > 0){
    currentDigit = num % 10;
    sumDigits += currentDigit;
    countDigits++;
    num /= 10;
  }
  return countDigits;
}