#ifndef CYLINDER_H
#define CYLINDER_H
#include"circle.h"
class Cylinder : public Circle{
    public:
        Cylinder(int=0, int=0, double r=0.0, double height=0.0);
        void setHeight(double);
        double getHeight() const;
        virtual double getArea() const;
        virtual double getVolume() const;
        virtual string getName() const; //return the name of shape (i.e. “Cylinder”)
        virtual void print() const;
    private:
        double height;
};

#endif // CYLINDER_H
