#include<iostream>
#include "EmployeSalery.cpp"
using namespace std;
ostream& operator <<(ostream &ob1,Employee &ob2){
    cout<<"Id :"<<ob2.empid<<endl;
    cout<<"Name :"<<ob2.name<<endl;
    cout<<"TotalSalary :"<<ob2.totalsal<<endl;
    cout<<"-----------------------------------"<<endl;    

}
int main(){
    Employee e1(1,"Shivay",300000,3);
    e1.calculateSalary();
    cout<<e1;
    e1.calculateSalary(20000,10000);
    cout<<e1;

}