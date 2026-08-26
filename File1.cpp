#include<iostream>
using namespace std;
int age=20;
extern void print_extern(){
    cout<<"Value of age var is:"<<age<<endl;

}
int main(){
    print_extern();
}