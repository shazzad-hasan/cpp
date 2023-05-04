/* Write a program that reads from the user the number of days
they traveled and then print their traveling time
in the format of full weeks and additional days.*/

#include <iostream>
using namespace std;

const int DAYS_IN_A_WEEK = 7;

int main()
{
  int daysTraveled;
  int fullWeeks, remainingDays;

  cout<<"Please enter number of days you traveled: "<<endl;
  cin>>daysTraveled;

  fullWeeks = daysTraveled / DAYS_IN_A_WEEK;
  remainingDays = daysTraveled % DAYS_IN_A_WEEK;

  cout<<daysTraveled<<" days are "<<fullWeeks<<" weeks and "<<remainingDays<<" days."<<endl;

  return 0;
}