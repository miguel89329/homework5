#ifndef SHAPE_H
#define SHAPE_H
#include<iostream>
using namespace std;

class Shape{
    public:
        virtual double getArea() const;     //return 0.0
        virtual string getName() const=0;     //return the name of shape
        virtual void print() const=0;          //display data members
        Shape();
};


#endif // SHAPE_H
