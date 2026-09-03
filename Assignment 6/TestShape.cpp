#include "Shape.h"
#include "Rectangel.h"
#include "Circle.h"
#include "Triangle.h"
#include "ShapeService.h"
#include <iostream>

int main(){
    Shape *arr[100];
    int count=0,id;
    int choice=0;
    double area;

    do{
        cout<<"\n1. Add new Shape\n2. Calculate area by id\n3. Calculate perimeter by id\n0. Exit\nEnter choice: ";
        cin>>choice;
        int subchoice=0;
        bool status=false;
        bool found=false;
        switch(choice){
            case 1:
                cout<<"1.Rec 2.Circle 3.Triangle\nEnter subchoice: ";
                cin>>subchoice;
                status=ShapeService::addNewShape(arr,count,subchoice);
                if(status) cout << "Shape added successfully!" << endl;
                break;
            case 2:
                cout<<"Enter id to calculate area: ";
                cin>>id;
                for(int i = 0; i < count; i++) {
                    if (arr[i]->getId() == id) {
                        cout << "Area of shape with id " << id << " is: " << arr[i]->calculateArea() << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Shape with id " << id << " not found." << endl;
                break;
            case 3:
                cout<<"Enter id to calculate perimeter: ";
                cin>>id;
                for(int i = 0; i < count; i++) {
                    if (arr[i]->getId() == id) {
                        cout << "Perimeter of shape with id " << id << " is: " << arr[i]->calculatePerimeter() << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Shape with id " << id << " not found." << endl;
                break;
            case 0:
                cout<<"Exiting..."<<endl;
                break;
            default:
                cout<<"Not a valid choice\n";
                break;
        }
    }while(choice!=0);
    
    for (int i = 0; i < count; i++) {
        delete arr[i];
    }
    return 0;
}
