#include "Shape.h"
#include<iostream>
#include<cstring>
using namespace std;
Shape::Shape(){
    this->id=-1;
    this->color=nullptr;

}
Shape::Shape(int id,char *color){
    this->color=new char(strlen(color)+1);
    this->id=id;
}

char* Shape::getColor(){
    return this->color;
}

int Shape::getId(){
    return this->id;
}

void Shape::display(){
    cout<<"Id is :"<<this->id;
    cout<<"Color of the Shape is :"<<this->color;
}



