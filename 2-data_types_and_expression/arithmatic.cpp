/* This program reads two integers from the user and prints their 
addition, subtraction, multiplication and division. */

#include <iostream>
using namespace std;

int main()
{
  int num1, num2;
  int add, sub, multi, div;

  cout<<"Please enter two numbers separated by a space:"<<endl;
  cin>>num1>>num2;

  add = num1 + num2;
  sub = num1 - num2;
  multi = num1 * num2;
  div = num1 / num2; /* '/' operator returns the division of the left 
                     operand by the right operand
                     As both the operands are integers, 
                     if dividend is not exactly divisible by divisor, 
                     the division operator returns only quotient 
                     and the reminder is discarded. */

  cout<<num1<<" + "<<num2<<" = "<<add<<endl;
  cout<<num1<<" - "<<num2<<" = "<<sub<<endl;
  cout<<num1<<" * "<<num2<<" = "<<multi<<endl;
  cout<<num1<<" / "<<num2<<" = "<<div<<endl;

  return 0;
}