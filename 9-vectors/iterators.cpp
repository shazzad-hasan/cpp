/* This program demonstrates the iterators in vector*/

#include <iostream>
#include <vector>

using namespace std;

int main(){

  vector<int> numbers;

  // fill out vector numbers with numbers from 1 to 10
  for (int i=1; i<=10; i++)
    numbers.push_back(i);

  // print out the elements of vector numbers

  for (int j=0; j<numbers.size(); j++)
    cout<<numbers[j]<<endl;

  for (int num:numbers)
    cout<<num<<endl;

  // using iterators
  for (auto i:numbers.begin)

  


  return 0;
}

