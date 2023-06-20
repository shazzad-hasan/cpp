/* Write a program that reads from the user a number between 1 to 7
(where 1 corresponds to Monday, 2 corresponds to Tuesday and so on) 
and prints corresponding day name using switch case.*/

#include <iostream>
using namespace std;

int main(){
    int day;

    cout<<"Please enter day number:"<<endl;
    cin>>day;

    switch(day){
        case 1:
            cout<<"Monday"<<endl;
            break;
        case 2:
            cout<<"Tuesday"<<endl;
            break;
        case 3:
            cout<<"Wednesday"<<endl;
            break;
        case 4:
            cout<<"Thursday"<<endl;
            break;
        case 5:
            cout<<"Friday"<<endl;
            break;
        case 6:
            cout<<"Saturday"<<endl;
            break;
        case 7:
            cout<<"Sunday"<<endl;
            break;
    }

    return 0;
}