#include "Address.h"
#include <cstring>
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