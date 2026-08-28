#include "friends.h"
#include <cstring>

friends:: friends(){
    id = 0;
    name = new char[1];

    name[0] = '\0';

    email = new char[1];
    email[0]='\0';

    hobbies = new char*[5];
    hobbyCount = 0;
    mobno = new char*[5];

}

friends:: friends(int id , char *nm , char*em , char* addr){
    this->id = id;

    this->name = new char[strlen(nm) + 1];
    strcpy(this->name, nm);

    this->email = new char[strlen(em) + 1];
    strcpy(this->email, em);

    this->address = new char[strlen(addr) + 1];
    strcpy(this->address, addr);

    hobbies = new char*[5];
    hobbyCount = 0;
   
}

void friends::addHobby(char *hobby){
    hobbies[hobbyCount]=new char[strlen(hobby)+1];
    strcpy(hobbies[hobbyCount],hobby);
    hobbyCount++;

}


void friends::display(){
    cout<<"Id is:"<<this->id<<endl;
    cout<<"Name is:"<<this->name<<endl;
    cout<<"Email is:"<<this->email<<endl;
    cout<<"Address is:"<<this->address<<endl;
    cout<<"Hobbies :";
    for (int i = 0; i < hobbyCount; i++)
    {
        cout<<hobbies[i]<<"  ";
    }
    cout<<endl;

}