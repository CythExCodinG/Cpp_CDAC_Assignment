#include "Shape.h"
#ifndef Circle_H
#define Circle_H
class Circle:public Shape{
    private:
        double radius;
    
    public:
        Circle();
        Circle(int id, char* color, double radius);
        double calculateArea() const override;
        double calculatePerimeter() const override;
        void display() override;
};
#endif
