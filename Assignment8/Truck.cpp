#include "Truck.h"
#include <iostream>

using namespace std;

Truck::Truck(int h, string code) : Vehicle(h) {
    discountCode = code;
    hasDiscount = false;
}

float Truck::calculateCharge() {
    float fixedCharge = 200.0f;
    int extraHours = hours > 2 ? hours - 2 : 0;
    extraChargeAmount = computeExtraCharge(extraHours, 50.0f);
    
    totalCharge = fixedCharge + extraChargeAmount;
    
    // validate discount using template function from Vehicle.h
    if (!discountCode.empty() && validateDiscount(discountCode.c_str())) {
        totalCharge -= 50.0f;
        hasDiscount = true;
    }
    
    return totalCharge;
}

void Truck::display() {
    cout << "Vehicle type = Truck" << endl;
    cout << "Extra charge = Rs. " << extraChargeAmount << endl;
    if (hasDiscount) {
        cout << "Total Charge after discount = Rs. " << totalCharge << endl;
    } else {
        cout << "Total Parking Charge = Rs. " << totalCharge << endl;
    }
    cout << "Receipts generated so far: " << getCount() << endl;
}
