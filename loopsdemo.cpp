#include<iostream>
using namespace std;
bool isPrime(int num1){
    for (int i = 2; i <= num1/2; i++)
    {
        if (num1%i==0)
        {
            return false;
        }
        
    }
    return true;
}
int factorial(int n){
    int fact=1;

    for (int i = 1; i <=n   ; i++){
        fact*=i;   
    }
    return fact;
    
}
void printTable(int n){
    for (int i = 1; i <=10; i++)
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
}

int sumOfDigit(int num1){
     int sum = 0;

     while(num1!=0){
        int remainder = num1%10;
        sum+=remainder;
        num1 = num1/10;
     }

     return sum;
}

int main(){
    int choice=0;
    do
    {
        cout<<"Enter your choice : \n"<<"1.Check Prime \n"<<"2. Factorial of no\n"<<"3. Print table\n"<<"4. Sum of digits\n"<<"5. Exit"<<endl;
        cin>>choice;
        int num1;
        switch (choice)
        {
        case 1:
            cout<<"Enter a no to check :";
            cin>>num1;
            if(isPrime(num1)){
                cout<<"No is prime "<<endl;
            }else{
                cout<<"Not a prime no "<<endl;
            }
            break;
        case 2:
            cout<<"Enter a no to find factorial of :";
            cin>>num1;
            cout<<"factorial of num :"<<num1<<"is:"<<factorial(num1);
            break;
        case 3:
        cout<<"Enter a no to print table of :";
            cin>>num1;
            printTable(num1);
            break;
        case 4:
            cout<<"Enter a no to find sum of digit :";
            cin>>num1;
            cout<<"sum of digits is : "<<sumOfDigit(num1)<<endl;
            break;
        case 5:
            cout<<">>>>>Thanks for using our code Kishori Mam<<<<"<<endl;
            break;
        default:
            break;
        }
    } while (choice!=5);
    
}