#ifndef Person_H
#define Person_H

#include "Address.h"

#include<iostream>
using namespace std;

class Person{
    private:
    static int id;
    char* name;
    Address addr;

    public:
    Person();
    Person(char* name , char* street , char* city , char* state , int pin);

};

#endif