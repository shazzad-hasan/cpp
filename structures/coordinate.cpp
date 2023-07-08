/* Program illustrating array of structure */ 

#include <iostream>
using namespace std;

struct coordinate{
    int x, y;
};

int MAX_ARRAY_SIZE = 100;
int main(){
    coordinate c[MAX_ARRAY_SIZE];
    int numOfCoordinates;

    cout<<"How many coordinates you'd like to provide? ";
    cin>>numOfCoordinates;
    cout<<endl;

    cout<<"Enter the coordinates (separated by a space): "<<endl;
    for (int i = 0; i < numOfCoordinates; i++){
        cin>>c[i].x>>c[i].y;
    }

    cout<<" "<<endl;
    for (int i = 0; i < numOfCoordinates; i++){
        cout<<"(x, y): ("<<c[i].x<<", "<<c[i].y<<")"<<endl;
    }

    return 0;
}