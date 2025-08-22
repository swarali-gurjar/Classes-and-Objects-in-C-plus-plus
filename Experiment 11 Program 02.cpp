//CAR DETAILS
#include<iostream>
#include<string>
using namespace std;

class Car {
public:
    string name;
    string year;
    void CarName() {
    cout<<"Enter name of the car: ";
    cin >> name;
    }
     void CarYear() {
    cout<<"Enter year of the car: ";
    cin >> year;
    }
    void displayCarName() {
    cout<<"Car name: " << name<<endl;
    }
     void displayCarYear() {
    cout<<"Car year: "<< year<<endl;
    }
};

int main() {
    Car c1;
    Car c2;
    c1.CarName();       
    c1.displayCarName(); 
    c1.CarYear();
    c1.displayCarYear();
    c2.CarName();       
    c2.displayCarName(); 
    c2.CarYear();
    c2.displayCarYear();
    
    return 0;
}
