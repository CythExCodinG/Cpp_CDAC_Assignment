#include<iostream>

#include "Vehicle.h"
#include "Car.cpp"

using namespace std;

int main(){

    cout<<"ENTER TOTAL PARKING HOURS : ";
    int hours;

    cin>>hours;

    Car c(hours);
    c.display();
}

