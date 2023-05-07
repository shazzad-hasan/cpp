#include <iostream>
using namespace std;

int main(){
    char inputCh;

    cout<<"Please enter a character:"<<endl;
    cin>>inputCh;

    if (inputCh >= 'a' && inputCh <= 'z')
        cout<<inputCh<<" is a lower case letter"<<endl;
    else if (inputCh >= 'A' && inputCh <= 'Z')
        cout<<inputCh<<" is an upper case letter"<<endl;
    else if (inputCh >= '0' && inputCh <= '9')
        cout<<inputCh<<" is a digit"<<endl;
    else
        cout<<inputCh<<" is not a alpha-numeric character"<<endl;

    return 0;
}