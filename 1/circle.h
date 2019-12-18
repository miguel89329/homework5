#ifndef CIRCLE_H
#define CIRCLE_H
#include"point.h"

class Circle : public Point{
    public:
        Circle(int=0, int=0, double r=0.0);
        void setRadius(double);
        double getRadius() const;      //半徑
        double getDiameter() const;    //直徑
        double getCircumference() const; //圓周長
        virtual double getArea() const;
        virtual string getName() const;  //return the name of shape (i.e. “Circle”)
        virtual void print() const;
    private:
        double radius;
};

#endif // CIRCLE_H
