#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
public:
    Car(int h);
    float calculateCharge() override;
    void display() override;
};

#endif
