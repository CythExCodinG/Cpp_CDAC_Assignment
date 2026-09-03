#include "Car.h"
#include <iostream>

using namespace std;

Car::Car(int h) : Vehicle(h) {
}

float Car::calculateCharge() {
    float fixedCharge = 100.0f;
    int extraHours = hours > 3 ? hours - 3 : 0;
    extraChargeAmount = computeExtraCharge(extraHours, 30.0f);
    totalCharge = fixedCharge + extraChargeAmount;
    return totalCharge;
}

void Car::display() {
    cout << "Vehicle type = Car" << endl;
    cout << "Extra charge = Rs. " << extraChargeAmount << endl;
    cout << "Total Parking Charge = Rs. " << totalCharge << endl;
    cout << "Receipts generated so far: " << getCount() << endl;
}