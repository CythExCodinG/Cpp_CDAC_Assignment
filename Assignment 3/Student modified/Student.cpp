#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std;

Student::Student()
{
    sid = 0;
    sname = new char[1];
    sname[0] = '\0';
    age = 0;
    m1 = 0;
    m2 = 0;
    m3 = 0;
}
Student::Student(int sid, char *nm, int age, int m1, int m2, int m3)
{
    this->sid = sid;
    this->sname=new char[strlen(nm)+1];
    strcpy(this->sname, nm);
    this->age = age;
    this->m1 = m1;
    this->m2 = m2;
    this->m3 = m3;
}

Student::~Student() {
    delete[] sname; 
}

void Student::setSid(int sid){
    this->sid=sid;
}
void Student::setAge(int age){
    this->age=age;
}
void Student::setName(char *nm){
    if(sname){
        delete sname;
    }
    this->sname=new char[strlen(nm)+1];
    strcpy(sname,nm);
}
void Student::setM1(int m1){
    this->m1=m1;
}
void Student::setAge(int m2){
    this->m2=age;
}
void Student::setAge(int m3){
    this->m3=age;
}
//Getter methosd
void Student::getName(){
    cout<<"Name :"<<this->sname;
}

void Student::getSid(){
    cout<<"Id :"<<this->sid;
}

void Student::getAge(){
    cout<<"age :"<<this->age;
}

void Student::getM1(){
    cout<<"Marks 1 :"<<this->m1;
}

void Student::getM2(){
    cout<<"Marks 2 :"<<this->m2;
}

void Student::display()
{
    cout<<"Id is :"<<this->sid<<endl;
    cout<<"Name is :"<<this->sname<<endl;
    cout<<"Age is :"<<this->age<<endl;
    cout<<"Name is :"<<this->m1<<endl;
   
    cout << this->sid;
}
