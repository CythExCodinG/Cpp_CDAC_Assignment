#ifndef Shape_H
#define Shape_H

class Shape{
    private:
        char *color;
        int id;
    public:
        Shape();
        Shape(int id,char *color);

        virtual double calculateArea() const=0;
        virtual double calculatePerimeter() const=0;
        virtual void display();

        int getId();
        char *getColor();
};
#endif
