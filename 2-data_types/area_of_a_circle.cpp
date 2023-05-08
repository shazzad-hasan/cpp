/* Write a program that reads from the user the radius of a circle
and then print the area of the circle. */

#include <iostream>
#include <cmath>
using namespace std;

// const double PI = 3.1416;
int main()
{
  double r, area;

  cout<<"Please enter the radius: "<<endl;
  cin>>r;

  //area = PI * (r * r);
  area = M_PI * (r * r);

  cout<<"The area of the circle with radius of "<<r<<" is "<<area<<endl;

  return 0;
}