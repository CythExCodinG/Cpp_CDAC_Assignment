#include "Vehicle.h"
#include<iostream>
#ifndef Car_H
#define Car_H
using namespace std;

class Car : public Vehicle{
 
    public:
      
    Car();
    Car(int hours) : Vehicle(hours){
        f_park_charge = 100;
     f_hrs = 3;
     e_hrs = hours - 3;
     e_park_charge = 30;
    }

    int calculate_charge();
    void display();

    
};

int Car :: calculate_charge(){
    
    if(e_hrs>0){
    total_charge = (f_park_charge*f_hrs) + e_park_charge;
    }
    else{
        total_charge = (f_park_charge*f_hrs);
    }

    return total_charge;
 } 

 void Car :: display(){
 cout<<"Vehicle type = Car"<<endl;
cout<<"Extra charge =  Rs. "<< extra_parking_charge()<<endl;
cout<<"Total Parking Charge = Rs. "<<calculate_charge()<<endl;
cout<<"Receipts generated so far: "<<++count<<endl;

 }



#endif