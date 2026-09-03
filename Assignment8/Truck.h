#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"
#include <string>

using namespace std;

class Truck : public Vehicle {
private:
    string discountCode;
    bool hasDiscount;
public:
    Truck(int h, string code = "");
    float calculateCharge() override;
    void display() override;
};

#endif
