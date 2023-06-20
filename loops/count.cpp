/* Write a program that reads from the user a positive integer n, 
and prints the numbers from 1 up to n */

#include <iostream>
using namespace std;

int main(){
    int n, counter;

    cout<<"Please enter a positive integer: ";
    cin>>n;

    // while loop
    // counter = 1;
    // while (counter <= n){
    //     cout<<counter<<endl;
    //     counter++;
    // }

    // for loop
    for (counter = 1; counter <= n; counter++){
        cout<<counter<<endl;
    }
    return 0;
}