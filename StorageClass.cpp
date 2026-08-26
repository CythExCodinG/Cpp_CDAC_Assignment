
#include<iostream>
using namespace std;

static int num1=10;
//Increments static num1 by +1
static void increment(){ 
    cout<<"Num1= "<<++num1<<endl;
}
int main(){
    increment(); //Value of num stays persistent across funtion calls
    increment();
    increment();
    increment();
}