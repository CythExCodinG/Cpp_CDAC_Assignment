#include "Person.h"

#include<iostream>
using namespace std;

Person *AddNewPerson(int &count){
   return new Person("Sanket" , "vinay nagar" , "nashik" , "Maharashtra" , 462001);
}

int main(){

    Person* arr[50];
    int count = 0;

    arr[count++]=AddNewPerson(count);

    arr[0]->display();

    return 0;
}

