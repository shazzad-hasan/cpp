/* Write a program that reads 3 real numbers, representing coefficients of a 
quadratic equation, and prints the sol'n of the eq'n if there are any, or 
an error massage.*/

#include <iostream>
# include <cmath>
using namespace std;

const int TWO_REAL_SOLUTION = 2;
const int ONE_REAL_SOLUTION = 1;
const int NO_SOLUTION = 0;
const int ALL_REALS = 3;
const int NO_REAL_SOLUTION = 4;

int quadratic(double a, double b, double c, double& x1, double& x2);
int linear(double a, double b, double& x);

int main(){
  int a, b, c;
  double x1, x2;

  cout<<"Please enter the coefficients of the quadratic eq'n:"<<endl;
  cin>>a>>b>>c;

  cout<<"Eq'n: " <<a<<"x^2 + "<<b<<"x + "<<c<<" = 0"<<endl;

  switch(quadratic(a, b, c, x1, x2)){
    case TWO_REAL_SOLUTION:
      cout<<"Sol'n: "<<x1<<", "<<x2<<endl;
      break;

    case ONE_REAL_SOLUTION:
      cout<<"Sol'n: "<<x1<<endl;
      break;

    case NO_SOLUTION:
      cout<<"No sol'n"<<endl;
      break;

    case ALL_REALS:
      cout<<"Sol'n: All real numbers"<<endl;
      break;

    case NO_REAL_SOLUTION:
      cout<<"No Real sol'n"<<endl;
      break;

    default:
      cout<<"Error"<<endl;
      break;
  }

  return 0;
}

int quadratic(double a, double b, double c, double& x1, double& x2){

  double discriminant, outX1, outX2;

  if (a != 0.0){
    discriminant = b*b - 4*a*c;

    if (discriminant > 0){
      outX1 = (-b + sqrt(discriminant))/(2*a);
      outX2 = (-b - sqrt(discriminant))/(2*a);
      
      x1 = outX1;
      x2 = outX2;
      return TWO_REAL_SOLUTION;
    }
    else if (discriminant == 0){
      outX1 = -b / (2*a);
      x1 = outX1;
      return ONE_REAL_SOLUTION;
    }
    else { // negative discriminant
      return NO_REAL_SOLUTION;
    }
  }
  else {
    return linear(b, c, outX1);
  }

}

int linear(double a, double b, double& x){

  double outX;
  
  if (a != 0){
    outX = -b/a;
    x = outX;
    return ONE_REAL_SOLUTION;
  }
  else if ((a == 0) && (b == 0)){
    outX = 0;
    x = outX;
    return ALL_REALS;
  }
  else { // a == 0 && b != 0
    return NO_SOLUTION;
  }
}