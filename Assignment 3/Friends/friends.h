#include<iostream>
using namespace std;

#ifndef FRIEND_H
#define FRIEND_H

class friends{

    public:
    int id;
    char *name;
    char* email;
    int hobbyCount;
    char** hobbies;
    char** mobno;

    char* address;

    friends();

    friends(int id, char *nm, char *em, char *addr);
    void addHobby(char *hobby);
    void display();
}; 


#endif


