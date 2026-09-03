#ifndef Vehicle_H

#define Vehicle_H

class Vehicle{
    protected:
    static int count;
    int f_park_charge;
    int f_hrs;
    int e_hrs;
    int e_park_charge;

    int hours;

    int total_charge;
    int extra_charge;

    public:
    Vehicle();
    Vehicle(int hours);

    virtual int calculate_charge() =0 ;

    int extra_parking_charge();

};


#endif