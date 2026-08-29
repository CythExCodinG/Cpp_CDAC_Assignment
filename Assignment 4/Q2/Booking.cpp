#include "Booking.h"
#include<iostream>

using namespace std;
ostream& operator <<(ostream &ob1,Booking &ob2){
    ob1<<"Id :"<<ob2.bid<<endl;
    ob1<<"Source :"<<ob2.source<<endl;
    ob1<<"Destination :"<<ob2.destination<<endl;
    ob1<<"Distance :"<<ob2.distance<<endl;
    ob1<<"Fare :"<<ob2.fare<<endl;
    ob1<<"-----------------------------------"<<endl;    

}
istream& operator >>(istream &ob1,Booking &ob2){
    cout<<"Enter Booking Id :";
    ob1>>ob2.bid;
    cout<<"Enter Source :";
    ob2.source = new char[20];
    ob1>>ob2.source;
    cout<<"Enter Destination :";
    ob2.destination = new char[20]; 
    ob1>>ob2.destination;
    cout<<"Enter Distance :";
    ob1>>ob2.distance;
    cout<<"Enter Fare :";
    ob1>>ob2.fare;
}
int main()
{
    Booking b1;
    float distance;
    cin>>b1;  //taking input operator overloading
    cout<<b1; //displaying output operator overloading

    b1.calculateFare(); //calculating fare based on distance
    b1.display();  //displaying the details of booking  
    
    return 0;
}