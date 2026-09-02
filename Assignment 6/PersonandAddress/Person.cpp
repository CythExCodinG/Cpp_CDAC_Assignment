#include "Person.h"

#include<cstring>

int Person::id=0;
Person::Person(){}

Person::Person(char* name , char* street , char* city , char* state , int pin) : addr(street,city,state,pin){

    this->name = new char[strlen(name)+1];
    strcpy(this->name , name);

    id++;
}

