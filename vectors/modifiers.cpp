/* This program demonstrates the modifiers in vector*/

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

  // insert 0 at the beginning
  v.insert(v.begin(), 0);

  // insert 1000 at the end
  v.emplace(v.end(), 1000);
  // insert 10000 at the end
  v.emplace_back(10000);

  // insert 100 at index 5
  v.insert(v.begin()+5, 100);

  cout<<"\nElements of vector v are: ";
  for (auto e:v)
    cout<<e<<" ";

  //remove the first element
  v.erase(v.begin());

  // remove the last element
  v.erase(v.end()-1);

  // remove last element
  v.pop_back();

  // remove the element at index 4
  v.erase(v.begin()+4);

  cout<<"\nElements of vector v are: ";
  for (auto e:v)
    cout<<e<<" ";

  // erase the vector
  v.clear();
  cout<<"\nSize: "<<v.size()<<endl;

  vector<int> v1, v2;
  v1.assign(5, 0);
  v2.assign(5, 1);

  cout<<"Elements of vector v1 are: ";
  for (auto e:v1)
    cout<<e<<" ";

  cout<<"\nElements of vector v2 are: ";
  for (auto e:v2)
    cout<<e<<" ";

  // swap v1 and v2
  v1.swap(v2);
  cout<<"\nElements of vector v1 are: ";
  for (auto e:v1)
    cout<<e<<" ";

  cout<<"\nElements of vector v2 are: ";
  for (auto e:v2)
    cout<<e<<" ";

  return 0;
}