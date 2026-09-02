#include "Shape.h"
#include "Rectangel.h"
#include "ShapeService.h"
#include <iostream>

int main(){
    Shape *arr[100];
    int count=0,id;
    int choice=0;
    double area;

    do{
        cout<<"1. Add new update\n 2.Calculate area by id\n 3.Caculate perimeter id\n";
        cin>>choice;
        int subchoice=0;
        bool status=false;
        switch(choice){
            case 1:
                cout<<"1.Rec 2.Circle 3.Triangle";
                cin>>subchoice;
                status=ShapeService::addNewShape(arr,count,subchoice);
                break;
            case 2:
                
            default:
                cout<<"Not a valid choice";
                break;
        }
    }while(choice!=0);
}
