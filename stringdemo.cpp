#include<iostream>
using namespace std;
int main(){
    //string funtions implementation
    string str1="Hello";
    string str2="World";
    cout<<"Length of str1 is:"<<str1.length()<<endl;
    cout<<"Length of str2 is:"<<str2.length()<<endl;   
    cout<<"Concatenation of str1 and str2 is:"<<str1+str2<<endl;
    cout<<"Comparison of str1 and str2 is:"<<str1.compare(str2)<<endl;
    cout<<"Substring of str1 is:"<<str1.substr(0,3)<<endl;
    cout<<"Find 'l' in str1 is:"<<str1.find('l')<<endl;
    cout<<"Replace 'l' with 'p' in str1 is:"<<str1.replace(2,1,"p")<<endl;
    cout<<"str1 after replace is:"<<str1<<endl;
    string str3="CDAC Acts";
    string arr[3]={str1,str2,str3};
    string userInput;
    cout<<"Enter a string to search in the array:";
    cin>>userInput;
    for (int i = 0; i < 3; i++)
    {
        if(userInput.compare(arr[i]) == 0){
            cout<<"String found at index:"<<i<<endl;
        }
    }
    
}