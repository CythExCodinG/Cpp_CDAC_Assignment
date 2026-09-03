#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle(){
    this->radius = 0;
}

Circle::Circle(int id, char* color, double radius):Shape(id,color){
    this->radius = radius;
}

void Circle::display(){
    Shape::display();
    cout << "Radius of circle is : " << this->radius << endl;
}

double Circle::calculateArea() const{
    return 3.14159 * this->radius * this->radius;
}

double Circle::calculatePerimeter() const{
    return 2 * 3.14159 * this->radius;
}
