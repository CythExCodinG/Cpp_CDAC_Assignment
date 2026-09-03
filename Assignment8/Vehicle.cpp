#include "Vehicle.h"

int Vehicle::count = 0;

Vehicle::Vehicle(int h) {
    hours = h;
    extraChargeAmount = 0.0f;
    totalCharge = 0.0f;
}

int Vehicle::getCount() {
    return count;
}

void Vehicle::incrementCount() {
    count++;
}
