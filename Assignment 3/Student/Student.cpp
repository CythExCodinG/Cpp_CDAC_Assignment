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
void Student::display()
{
    cout<<"Id is :"<<this->sid<<endl;
    cout<<"Name is :"<<this->sname<<endl;
    cout<<"Age is :"<<this->age<<endl;
    cout<<"Name is :"<<this->m1<<endl;
   
    cout << this->sid;
}
void Student::percentage()
{
    float sum = (m1 + m2 + m3);
    float percentage = (sum / 300) * 100;
    cout << "Percentage of student is :" << percentage;
}