/* Write a program that reads from the user a time entered in a 
24-hour format, and prints the equivalent time in a 12-hour format. */

#include <iostream>
using namespace std;

int main(){
    int hour24, min24, hour12, min12;
    string period;
    char temp;

    cout<<"Please enter a time in a 24-hour format:"<<endl;
    cin>>hour24>>temp>>min24;

    min12 = min24;
    if (hour24 >= 0 && hour24 <= 11){
        period = "am";
        if (hour24 == 0)
            hour12 = 12;
        else
            hour12 = hour24;
    }
    else {
        period = "pm";
        if (hour24 == 12)
            hour12 = 12;
        else
            hour12 = hour24 - 12;
    }

    cout<<hour24<<temp<<min24<<" is "<<hour12<<temp<<min12<<" "<<period<<endl;

    return 0;
}