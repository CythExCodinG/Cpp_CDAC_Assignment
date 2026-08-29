#include<iostream>
#include<cstring>
using namespace std;

class Employee{
    public:
        int empid;
        char* name;
        float basesalary;
        float bonus;
        float overtimesal;
        float totalsal;
    public:
        Employee(){
            empid=0;

        }
        Employee(int eid,char *nm,float bonus,float overtime){
            this->empid=eid;
            this->name=new char[strlen(nm)+1];
            strcpy(name,nm);
            this->bonus=bonus;
        }
        friend ostream& operator<<(ostream& ob1, const Employee& ob2);
        void calculateSalary(float baseSal){
            this->basesalary=baseSal;
            totalsal=baseSal;
        }
        void calculateSalary(float baseSal,float bonus){
            this->basesalary=baseSal;
            totalsal=baseSal+bonus;
        }
        void calculateSalary(float baseSal,int bonus,int overtime){

            this->basesalary=baseSal;
            totalsal=baseSal+calculateovertime(overtime)+bonus;
        }
        float calculateovertime(int overtime){
            int rate=100;

            float overtimesal=rate*overtime;
            return overtimesal;
        }
        float calculateSalary(){
            int rate;
            int hrs;
            cout<<"Enter hourly rate :";
            cin>>rate;
            cout<<"Hours worked :";
            cin>>hrs;
            return totalsal=rate*hrs;
        }        

};