#include<iostream>
using namespace std;
//Return the factorial for the given number
int factorial(int n){ 
    int fact=1;
    for (int i = 1; i <= n; i++)
    {
        fact*=i;
    }
    return fact;
}
int main(){
    int n,r;
    cout<<"Enter value of n:";
    cin>>n;
    cout<<"Enter value of r:";
    cin>>r;
    cout<<"nCr for the given value is :"<<factorial(n)/(factorial(r)*factorial(n-r))<<endl;
}