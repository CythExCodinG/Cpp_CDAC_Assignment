#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std;

// Default Constructor
Student::Student() {
    sid = 0;
    sname = new char[1];
    sname[0] = '\0';
    age = 0;
    m1 = 0;
    m2 = 0;
    m3 = 0;
}

// Parameterized Constructor
Student::Student(int sid, const char *nm, int age, int m1, int m2, int m3) {
    this->sid = sid;
    this->sname = new char[strlen(nm) + 1];
    strcpy(this->sname, nm);
    this->age = age;
    this->m1 = m1;
    this->m2 = m2;
    this->m3 = m3;
}

// Destructor
Student::~Student() {
    delete[] sname; 
}

// Copy Constructor
Student::Student(const Student &other) {
    this->sid = other.sid;
    this->age = other.age;
    this->m1 = other.m1;
    this->m2 = other.m2;
    this->m3 = other.m3;
    this->sname = new char[strlen(other.sname) + 1];
    strcpy(this->sname, other.sname);
}

// Copy Assignment Operator
Student& Student::operator=(const Student &other) {
    if (this != &other) {
        delete[] sname;
        this->sid = other.sid;
        this->age = other.age;
        this->m1 = other.m1;
        this->m2 = other.m2;
        this->m3 = other.m3;
        this->sname = new char[strlen(other.sname) + 1];
        strcpy(this->sname, other.sname);
    }
    return *this;
}

// Setters
void Student::setSid(int sid) { this->sid = sid; }
void Student::setAge(int age) { this->age = age; }
void Student::setM1(int m1)   { this->m1 = m1; }
void Student::setM2(int m2)   { this->m2 = m2; } // Fixed assignment bug
void Student::setM3(int m3)   { this->m3 = m3; } // Fixed assignment bug

void Student::setName(const char *nm) {
    if (sname) {
        delete[] sname; // Fixed: delete[] instead of delete
    }
    this->sname = new char[strlen(nm) + 1];
    strcpy(this->sname, nm);
}

// Getters
int Student::getSid() const        { return sid; }
const char* Student::getName() const { return sname; }
int Student::getAge() const        { return age; }
int Student::getM1() const         { return m1; }
int Student::getM2() const         { return m2; }
int Student::getM3() const         { return m3; }

// Display
void Student::display() const {
    cout << "Id       : " << sid << endl;
    cout << "Name     : " << sname << endl;
    cout << "Age      : " << age << endl;
    cout << "Marks 1  : " << m1 << endl;
    cout << "Marks 2  : " << m2 << endl;
    cout << "Marks 3  : " << m3 << endl;
    cout << "-----------------------" << endl;
}

// Percentage Calculation
void Student::percentage() const {
    float sum = m1 + m2 + m3;
    float perc = (sum / 300.0f) * 100.0f;
    cout << "Percentage: " << perc << "%" << endl;
}