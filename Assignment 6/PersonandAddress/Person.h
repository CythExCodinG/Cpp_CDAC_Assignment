#ifndef Person_H
#define Person_H

#include "Address.h"
#include<iostream>
using namespace std;

class Person{
    private:
    static int count;
    int id;
    char* name;
    Address addr;

    public:
    Person();
    Person(const char* name, const char* street, const char* city, const char* state, int pin);
    ~Person();
    
    void display() const;
    int getId() const;
    const char* getName() const;
    Address& getAddress();
};

#endif
