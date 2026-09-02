#include "Address.h"
#include <cstring>

Address::Address(char* street , char* city , char* state , int pin) {

    this->street = new char[strlen(street)+1];
    strcpy(this->street , street);

    this->city = new char[strlen(city)+1];
    strcpy(this->city , city);

    this->state = new char[strlen(state)+1];
    strcpy(this->street , state);

    this->pin = pin;

}