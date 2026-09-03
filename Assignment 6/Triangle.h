#include "Shape.h"
#ifndef Triangle_H
#define Triangle_H
class Triangle:public Shape{
    private:
        double base, height;
    
    public:
        Triangle();
        Triangle(int id, char* color, double base, double height);
        double calculateArea() const override;
        double calculatePerimeter() const override;
        void display() override;
};
#endif
