#include "Rectangel.h"
#include<iostream>
#include<cstring>
using namespace std;

Rectangle::Rectangle(){
    this->len=0;
    this->br=0;
}

Rectangle::Rectangle(int id,char* color,double len,double br):Shape(id,color){
    this->len=len;
    this->br=br;
}

void Rectangle::display(){
    Shape::display();
    cout<<"Length of rectangle is :"<<this->len<<endl;
    cout<<"Bredth of rectangle is :"<<this->br<<endl;
}
double Rectangle::calculateArea() const{
    double area=this->len*this->br;
    return area;
}
double Rectangle::calculatePerimeter() const{
    double perimeter=2*(this->len+this->br);
    return perimeter;
}



