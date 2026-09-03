#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

using namespace std;

class Vehicle {
protected:
    static int count;
    int hours;
    float extraChargeAmount;
    float totalCharge;
public:
    Vehicle(int h);
    virtual ~Vehicle() {}
    
    virtual float calculateCharge() = 0;
    virtual void display() = 0;
    
    static int getCount();
    static void incrementCount();
    
    // inline function to compute extra parking charges
    inline float computeExtraCharge(int extraHours, float rate) {
        return extraHours > 0 ? extraHours * rate : 0.0f;
    }
};

// function template to validate discount code
template <typename T>
bool validateDiscount(T code) {
    string strCode(code);
    return strCode == "TRUCK50";
}

#endif