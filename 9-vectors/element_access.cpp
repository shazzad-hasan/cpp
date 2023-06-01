/* This program demonstrates the capacity in vector*/

#include <iostream>
#include <vector>

using namespace std;

int main(){

  vector<int> v;

  // fill out vector numbers with numbers from 1 to 10
  for (int i=1; i<=10; i++)
    v.push_back(i);

  cout<<"Elements of vector v are: ";
  for (auto e:v)
    cout<<e<<" ";

  cout<<"\nElement 0 is: "<<v[0]<<endl;
  cout<<"Element at 0 is: "<<v.at(0)<<endl;
  cout<<"Front: "<<v.front()<<endl;
  cout<<"Back: "<<v.back()<<endl;

  int* p = v.data();
  cout<<"First element: "<<*p<<endl;

  return 0;
}