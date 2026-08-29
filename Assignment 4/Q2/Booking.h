#ifndef Booking_B
#define Booking_B
#include <cstring>
#include <iostream>
#include <string>
using namespace std;
class Booking
{
private:
    int bid;
    char *source;
    char *destination;
    float distance;
    float fare;
    const float ratePerKm = 15;
    const float two_rate = 20;
    const float three_rate = 25;
    const float four_rate = 30;

public:
friend ostream& operator <<(ostream &ob1,Booking &ob2);
friend istream& operator >>(istream &ob1,Booking &ob2);
    void getBookingDetails ()
    {
        int bid;
        cout << "Enter Booking ID: ";
        cin >> bid; 
        this->bid = bid;
        char src[20];
        cout << "Enter Source: ";
        cin >> src;

        source = new char[strlen(src) + 1];
        strcpy(source, src);
        cout << "Enter Destination: ";
        char dest[20];
        cin >> dest;
        destination = new char[strlen(dest) + 1];
        strcpy(destination, dest);
    
    }

    void getbid(int bid)
    {
        this->bid = bid;
    }

    void getsource(char *src)
    {
        source = new char[strlen(src) + 1];
        strcpy(source, src);
    }

    void getdestination(char *dest)
    {
        destination = new char[strlen(dest) + 1];
        strcpy(destination, dest);
    }

    void getdistance(float distance)
    {
        this->distance = distance;
    }

    void getfare(float fare)
    {
        this->fare = fare;
    }

    void setbid(int bid)
    {
        this->bid = bid;
    }
    void setsource(char *src)
    {
        source = new char[strlen(src) + 1];
        strcpy(source, src);
    }
    void setdestination(char *dest)
    {
        destination = new char[strlen(dest) + 1];
        strcpy(destination, dest);
    }
    void setdistance(float distance)
    {
        this->distance = distance;
    }
    void setfare(float fare)
    {
        this->fare = fare;
    }
    void display()
    {
        cout << "Booking ID: " << bid << endl;
        cout << "Source: " << this->source << endl; 
        cout << "Destination: " << this->destination << endl;
        cout << "Distance: " << this->distance << " km" << endl;
        cout << "Fare: Rs" << this->fare << endl;
    }
    void calculateFare(float distance)
    {
        fare = distance*ratePerKm;
    }
    void calculateFare(float distance,int type
    )
    {
        if(type==2)
        {
            fare = distance * two_rate;
        }
        else if(type==3)
        {
            fare = distance * three_rate;
        }
        else if(type==4)
        {
            fare = distance * four_rate;
        }

    }
    void calculateFare(float distance,int type,int passengers)
    {
        if(passengers>4)
        {
            cout<<"Error: Maximum passengers exceeded!"<<endl;
            return;
        }
        if(type==2)
        {
            fare = distance * two_rate;
        }
        else if(type==3)
        {
            fare = distance * three_rate;
        }
        else if(type==4)
        {
            fare = distance * four_rate;
        }

    }
    void calculateFare()
    {
      cout<<"Enter distance in km :";
      cin>>distance;
      cout<<"Enter type of vehicle (2,3,4) :";
      int type;
      cin>>type;
      cout<<"Total passengers :";
      int passengers;
      cin>>passengers;
      if(passengers>4)
      {
        cout<<"Error: Maximum passengers exceeded!"<<endl;
        return;
      }
      calculateFare(distance,type,passengers);
    }
};
#endif