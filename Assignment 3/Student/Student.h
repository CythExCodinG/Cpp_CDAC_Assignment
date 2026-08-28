#include<iostream>
using namespace std;
#ifndef Student_H
#define Student_H

class Student{
    public:
        int sid;
        char *sname;
        int age,m1,m2,m3;

    void setSid(int sid);
    void setName(char *nm);
    void setAge(int age);
    void setM1(int m1);
    void setM2(int m2);
    void setM3(int m3);

    void getSid();
    void getName();
    void getAge();
    void getM1();
    void getM2();
    void getM3();

    Student();

    Student(int sid, char *nm, int age, int m1, int m2, int m3);
    ~Student();

    void display();
    void percentage();
};

#endif

