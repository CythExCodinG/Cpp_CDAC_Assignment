#include<iostream>
#include "Student.cpp"
using namespace std;

int main(){
    Student s1;
    char *name=new char[20];
    strcpy(name,"rohit");
    Student s2(1,name,20,40,50,60);
    strcpy(name,"shivay");
    Student *s3=new Student(1,name,20,40,50,60);
    s1.display();
    s2.display();
    s3->display();
    return 0;
}