#include<iostream>
using namespace std;
extern int age;
void print_extern(){
    cout<<"Age value is:"<<age<<endl;
}
int main(){
    print_extern();
    cout<<age;
}