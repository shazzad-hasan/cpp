/* Write a program that reads from the user two positive integers 
n, k (n >= k) and prints the value of n choose k */

#include <iostream>
using namespace std;

int factorial(int num){
  int factRes, i;

  factRes = 1;
  for (i=1; i<=num; i++){
    factRes *= i;
  }
  return factRes;
}

int kCombination(int n, int k){
  int nFact, kFact, n_kFact;

  nFact = factorial(n);
  kFact = factorial(k);
  n_kFact = factorial(n-k);
  return nFact / (kFact * n_kFact);
}

int main(){
  int n, k, nFact, kFact, n_kFact, k_comb;

  cout<<"Please enter n and k (n >= k):"<<endl;
  cin>>n>>k;
  
  k_comb = kCombination(n, k);

  cout<<n<<" choose "<<k<<" is "<<k_comb<<endl;

  return 0;
}