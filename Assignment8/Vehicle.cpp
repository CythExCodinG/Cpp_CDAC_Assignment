#include "Vehicle.h"

int Vehicle :: count=0;

Vehicle::Vehicle(int hours){
  this->hours = hours;
}

int Vehicle::extra_parking_charge(){
    return e_park_charge = e_hrs * e_park_charge;
}
