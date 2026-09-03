#include "Shape.h"
#include "Rectangel.h"
#include "Circle.h"
#include "Triangle.h"
#include<iostream>
#include<cstring>
using namespace std;

class ShapeService{
    Shape *s[50];

    public:
        static bool addNewShape(Shape **s,int &count,int ch){
            if (count >= 50) {
                cout << "Array is full!" << endl;
                return false;
            }
            char color[10];
            int id;
            double len,br,radius,base,height;
            cout<<"Enter color :";
            cin>>color;

            cout<<"Enter id :";
            cin>>id;

            if(ch==1){
                cout<<"Enter len :";
                cin>>len;
                cout<<"Enter bredth :";
                cin>>br;
                s[count++]=new Rectangle(id,color,len,br);
                return true;
            } else if (ch==2) {
                cout<<"Enter radius :";
                cin>>radius;
                s[count++]=new Circle(id,color,radius);
                return true;
            } else if (ch==3) {
                cout<<"Enter base :";
                cin>>base;
                cout<<"Enter height :";
                cin>>height;
                s[count++]=new Triangle(id,color,base,height);
                return true;
            } else {
                cout << "Invalid shape choice!" << endl;
                return false;
            }
        }
};