#include "Person.h"

#include<cstring>

int Person::id=0;
Person::Person(){
    this->name=nullptr;
}

Person::Person(const char* name, const char* street, const char* city, const char* state, int pin) : addr(street,city,state,pin){

    this->name = new char[strlen(name)+1];
    strcpy(this->name , name);

    id++;
}
void Person::display() const {
    std::cout << "Name: " << (name ? name : "N/A") << std::endl;
    // You can also call an addr.display() here if Address has one
}
