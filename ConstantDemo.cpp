#include<iostream>
using namespace std;
int main(){
    const int a=10;
    const int *ptr=&a; //Pointer to a integer constant
    
    const int b=20;
    cout<<*ptr<<endl;
    // cout<<*ptr+1;
    // *ptr=20; Do not allows us to manipulate const interger
    int c=40;
    int * const ptr2=&c;
    cout<<*ptr2;
    int d=50;
    // ptr2=&d; Cannot change pointer value as it is constant
    
}