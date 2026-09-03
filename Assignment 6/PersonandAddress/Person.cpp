#include "Person.h"
#include <cstring>
#include <iostream>

int Person::count=0;

Person::Person(){
    this->name = nullptr;
    this->id = ++count;
}

Person::Person(const char* name, const char* street, const char* city, const char* state, int pin) : addr(street,city,state,pin){
    this->name = new char[strlen(name)+1];
    strcpy(this->name , name);
    this->id = ++count;
}

Person::~Person() {
    delete[] name;
}

void Person::display() const {
    std::cout << "ID: " << id << " | Name: " << (name ? name : "N/A") << "\nAddress: ";
    addr.display();
}

int Person::getId() const {
    return id;
}

const char* Person::getName() const {
    return name;
}

Address& Person::getAddress() {
    return addr;
}
