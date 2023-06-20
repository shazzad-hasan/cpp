/* This program demonstrates the iterators in vector*/

#include <iostream>
#include <vector>

using namespace std;

int main(){

  vector<int> v;

  // fill out vector numbers with numbers from 1 to 10
  for (int i=1; i<=10; i++)
    v.push_back(i);

  // print out the elements of vector v

  for (int i=0; i<v.size(); i++)
    cout<<v[i]<<" ";

  cout<<"\nusing for-each / range-for loop: ";
  for (int e:v)
    cout<<e<<" ";

  cout<<"\nusing for-each / range-for loop: ";
  for (auto e:v)
    cout<<e<<" ";

  // using iterators

  cout <<"\nusing begin() and end() functions: ";
  for (auto e = v.begin(); e != v.end(); e++)
    // access element using dereference operator
    cout<<*e<<" ";

  cout <<"\nusing cbegin() and cend() functions: ";
  for (auto e = v.cbegin(); e != v.cend(); e++)
    cout<<*e<<" ";

  cout <<"\nusing rbegin() and rend() functions: ";
  for (auto e = v.rbegin(); e != v.rend(); e++)
    cout<<*e<<" ";

  cout <<"\nusing crbegin() and crend() functions: ";
  for (auto e = v.crbegin(); e != v.crend(); e++)
    cout<<*e<<" ";

  return 0;
}

