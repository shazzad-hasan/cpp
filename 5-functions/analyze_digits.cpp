/* Write a program that reads from the user a positive integer num,
and prints the number of digits in the num and their sum. */

#include <iostream>
using namespace std;

// // pass by reference
// void analyzeDigits(int num, int &sumDigits, int &numDigits){
//   int currentDigit, outSumDigits, countDigits;

//   countDigits = 0;
//   while (num > 0){
//     currentDigit = num % 10;
//     outSumDigits += currentDigit;
//     countDigits++;
//     num /= 10;
//   }
//   sumDigits = outSumDigits;
//   numDigits = countDigits;
// }

// pass by both value and reference
int analyzeDigits(int num, int &sumDigits){
  int currentDigit, outSumDigits, countDigits;

  countDigits = 0;
  while (num > 0){
    currentDigit = num % 10;
    sumDigits += currentDigit;
    countDigits++;
    num /= 10;
  }
  return countDigits;
}

int main(){
  int num, sumDigits, numDigits;

  cout<<"Please enter a positive interger number:"<<endl;
  cin>>num;

  // analyzeDigits(num, sumDigits, numDigits);
  numDigits = analyzeDigits(num, sumDigits);

  cout<<num<<" has "<<numDigits<<" digits and their sum is "<<sumDigits<<endl;

  return 0;
}