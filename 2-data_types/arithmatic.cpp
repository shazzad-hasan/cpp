/* This program reads two integers from the user and perform
arithmatic operations (+,-,*,/,%) on them. */

#include <iostream>
using namespace std;

int main()
{
  int num1, num2;
  int add, sub, multi, q, r;

  cout<<"Please enter two numbers separated by a space:"<<endl;
  cin>>num1>>num2;

  add = num1 + num2;
  sub = num1 - num2;
  multi = num1 * num2;
  q = num1 / num2; // '/' operator returns quotient
  r = num1 % num2;  // '%' operator returns remainder

  cout<<num1<<" + "<<num2<<" = "<<add<<endl;
  cout<<num1<<" - "<<num2<<" = "<<sub<<endl;
  cout<<num1<<" * "<<num2<<" = "<<multi<<endl;
  cout<<num1<<" / "<<num2<<" = "<<q<<endl;
  cout<<num1<<" % "<<num2<<" = "<<r<<endl;

  return 0;
}