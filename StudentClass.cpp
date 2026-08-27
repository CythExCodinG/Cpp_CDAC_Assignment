#include<iostream>
#include <cstring>

using namespace std;

class Student{
    private:
        int sid,age,m1,m2,m3;
        char *name;
    public:
        Student(){
            sid=0;
            age=0;
            m1=0;
            m2=0;
            m3=0;
        }
        Student(int sid,int m1,int m2,int m3,char *name){
            this->sid=sid;
            this->m1=m1;
            this->m2=m2;
            this->m3=m3;
            this->name=name;
        }
        void getId(){
            cout<<"Id is :"<<sid;
            cout<<endl;
        }
        void getMarks1(){
            cout<<"Marks 1 is :"<<m1;
            cout<<endl;

        }
        void getMarks2(){
            cout<<"Marks 2 is :"<<m2;
            cout<<endl;

        }
        void getMarks3(){
            cout<<"Marls 3 is :"<<m3;
            cout<<endl;

        }
        void getName(){
            cout<<"Name is :"<<name;
            cout<<endl;
        }
        float calculatePercentage(){
            float sum=(m1+m2+m3);
            float percentage=(sum/300)*100;
            return percentage;
        }
        void setName(){
            char *name=new char[10];
            cout<<"Enter your new name :";
            cin>>name;
            strcpy(this->name,name);

        }
        void setMarks1(){
            int m1;
            cout<<"Enter marks 1 :";
            cin>>m1;

        }
        void setMarks2(){
            int m1;
            cout<<"Enter marks 2 :";
            cin>>m1;

        }void setMarks3(){
            int m1;
            cout<<"Enter marks 2 :";
            cin>>m1;

        }
        void setAge(){
            int m1;
            cout<<"Enter age:";
            cin>>m1;

        }
};
int main(){
    char *name=new char[20];
    strcpy(name,"rohit");
    // *name="rohit";
    // cout<<*name;e
    Student s1(1,80,90,86,name);
    cout<<"Percentage achieved is :"<<s1.calculatePercentage()<<endl;
    s1.setName();
    s1.setAge();
    s1.setMarks1();
    s1.setMarks2();
    s1.setMarks3();
}