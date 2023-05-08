#include <iostream>
using namespace std;

int main(){
  bool p = true;
  bool q = false;

  // when the value returned, true = 1, false = 0
  cout<< p <<endl;
  cout<< q <<endl;

  // all non-zero values are stored as 1 (true)
   bool a = 5, b = -5, c = 0;

   cout<<"5 is stored as "<<a<<endl;
   cout<<"-5 is stored as "<<b<<endl;

  return 0;
}