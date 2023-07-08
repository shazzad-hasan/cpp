/* Program illustrating the use of one structure in multiple variables */ 

#include <iostream>
using namespace std;

struct {
    string brand;
    string model;
    int year;
} car1, car2;

int main(){
    car1.brand = "BMW";
    car1.model = "X5";
    car1.year = 2000;

    car2.brand = "Ford";
    car2.model = "Mustang";
    car2.year = 1975;

    cout<<car1.brand<<" "<<car1.model<<" "<<car1.year<<endl;
    cout<<car2.brand<<" "<<car2.model<<" "<<car2.year<<endl;
}