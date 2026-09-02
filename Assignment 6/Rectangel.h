#include "Shape.h"
#ifndef Rectangel_H;
#define Rectangel_H;
class Rectangle:public Shape{

    private:
        double len,br;
    
    public:
        Rectangle();
        Rectangle(int id,char* color,double len,double br);
        double calculateArea() const override;
        double calculatePerimeter() const override;
        void display();
};
#endif