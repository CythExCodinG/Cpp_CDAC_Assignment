#include "Triangle.h"
#include <iostream>
#include <cmath>
using namespace std;

Triangle::Triangle(){
    this->base = 0;
    this->height = 0;
}

Triangle::Triangle(int id, char* color, double base, double height):Shape(id,color){
    this->base = base;
    this->height = height;
}

void Triangle::display(){
    Shape::display();
    cout << "Base of triangle is : " << this->base << endl;
    cout << "Height of triangle is : " << this->height << endl;
}

double Triangle::calculateArea() const{
    return 0.5 * this->base * this->height;
}

double Triangle::calculatePerimeter() const{
    // Assuming an isosceles triangle or using a simple approximation if sides are not given.
    // The question just says store details of Triangle class. 
    // We can assume an isosceles triangle for perimeter: 2 * sqrt( (base/2)^2 + height^2 ) + base
    double side = sqrt(pow(this->base / 2.0, 2) + pow(this->height, 2));
    return 2 * side + this->base;
}
