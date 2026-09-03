#include "Address.h"
#include <iostream>
#include <cstring>
using namespace std;

Address::Address() {
    street = nullptr;
    city = nullptr;
    state = nullptr;
    pin = 0;
}

Address::Address(const char* street, const char* city, const char* state, int pin) {
    this->street = new char[strlen(street)+1];
    strcpy(this->street , street);

    this->city = new char[strlen(city)+1];
    strcpy(this->city , city);

    this->state = new char[strlen(state)+1];
    strcpy(this->state , state);

    this->pin = pin;
}

Address::Address(const Address& other) {
    if(other.street) {
        street = new char[strlen(other.street)+1];
        strcpy(street, other.street);
    } else street = nullptr;
    
    if(other.city) {
        city = new char[strlen(other.city)+1];
        strcpy(city, other.city);
    } else city = nullptr;
    
    if(other.state) {
        state = new char[strlen(other.state)+1];
        strcpy(state, other.state);
    } else state = nullptr;
    
    pin = other.pin;
}

Address& Address::operator=(const Address& other) {
    if(this != &other) {
        delete[] street;
        delete[] city;
        delete[] state;
        
        if(other.street) {
            street = new char[strlen(other.street)+1];
            strcpy(street, other.street);
        } else street = nullptr;
        
        if(other.city) {
            city = new char[strlen(other.city)+1];
            strcpy(city, other.city);
        } else city = nullptr;
        
        if(other.state) {
            state = new char[strlen(other.state)+1];
            strcpy(state, other.state);
        } else state = nullptr;
        
        pin = other.pin;
    }
    return *this;
}

Address::~Address() {
    delete[] street;
    delete[] city;
    delete[] state;
}

void Address::display() const {
    cout << (street ? street : "") << ", " 
         << (city ? city : "") << ", " 
         << (state ? state : "") << " - " << pin << endl;
}

const char* Address::getCity() const {
    return city;
}

void Address::modifyAddress(const char* street, const char* city, const char* state, int pin) {
    delete[] this->street;
    delete[] this->city;
    delete[] this->state;
    
    this->street = new char[strlen(street)+1];
    strcpy(this->street , street);

    this->city = new char[strlen(city)+1];
    strcpy(this->city , city);

    this->state = new char[strlen(state)+1];
    strcpy(this->state , state);

    this->pin = pin;
}