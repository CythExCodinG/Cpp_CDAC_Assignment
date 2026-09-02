#include "Shape.h"
#include "Rectangel.h"
#include<iostream>
#include<cstring>
using namespace std;

class ShapeService{
    Shape *s[50];

    public:
        static bool addNewShape(Shape **s,int &count,int ch){
            char color[10];
            int id;
            double len,br,radius;
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
                
            }

        }
};