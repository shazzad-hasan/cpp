/* Program illustrating exception handling */

#include <iostream>
#include <string>
using namespace std;

int main(){
    string word = "Pneumonoultramicroscopicsilicovolcanoconiosis ";

    try {
        cout<<word.at(50)<<endl;
        //cout<<word.at(44)<<endl;
    }
    catch (out_of_range& e) {
        cout<<"Exception: "<<e.what()<<endl;
    }
    return 0;
}