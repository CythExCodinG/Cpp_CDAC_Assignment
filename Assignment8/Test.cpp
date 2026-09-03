#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main() {
    char type;
    int hours;
    
    while (true) {
        cout << "Enter type of Vehicle (C for Car, T for Truck, Q to quit): ";
        cin >> type;
        
        if (type == 'Q' || type == 'q') {
            break;
        }
        
        if (type != 'C' && type != 'c' && type != 'T' && type != 't') {
            cout << "Invalid vehicle type. Please try again." << endl;
            continue;
        }
        
        cout << "Enter parking hours: ";
        cin >> hours;
        
        if (hours <= 0) {
            cout << "Parking hours must be positive." << endl;
            continue;
        }
        
        Vehicle* v = nullptr;
        
        if (type == 'C' || type == 'c') {
            v = new Car(hours);
        } else if (type == 'T' || type == 't') {
            string code;
            cout << "Enter discount code if available (or press Enter to skip): ";
            cin.ignore();
            getline(cin, code);
            v = new Truck(hours, code);
        }
        
        if (v) {
            Vehicle::incrementCount();
            v->calculateCharge();
            v->display();
            cout << endl;
            delete v;
        }
    }
    
    return 0;
}
