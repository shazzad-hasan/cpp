/* This program demonstrates the capacity in vector*/

#include <iostream>
#include <vector>

using namespace std;

int main(){

  vector<int> v;

  // fill out vector numbers with numbers from 1 to 10
  for (int i=1; i<=10; i++)
    v.push_back(i);

  cout<<"Size: "<<v.size()<<endl;
  cout<<"Max size: "<<v.max_size()<<endl;
  cout<<"Capacity: "<<v.capacity()<<endl; 

  v.resize(5);
  cout<<"Size: "<<v.size()<<endl;
  if (v.empty())
    cout<<"Vector is empty"<<endl;
  else 
    cout<<"Vector isn't empty"<<endl; 
  
  cout<<"Elements of vector v are: ";
  for (auto e:v)
    cout<<e<<" ";

  return 0;
}