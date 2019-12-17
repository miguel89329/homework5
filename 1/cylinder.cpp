#include "cylinder.h"

Cylinder :: Cylinder(int x1, int y1, double r, double height1) : Circle(x1,y1,r){
    height = height1;
}

void Cylinder :: setHeight(double h)
{
    height = h;
}
double Cylinder :: getHeight() const
{
    return height;
}
double Cylinder :: getArea() const
{
    return  2 * Circle :: getArea() + height * Circle :: getCircumference();
}
double Cylinder :: getVolume() const
{
    return Circle :: getArea() * height;
}
string Cylinder :: getName() const //return the name of shape (i.e. “Cylinder”)
{
    return "Cylinder";
}
void Cylinder :: print() const
{
    cout << getName() << endl;
    cout << "center:(" << Circle :: Point::getX() << "," << Circle :: Point :: getY() << ")" << endl;
    cout << "radius:" << Circle :: getRadius() << endl;
    cout << "diameter:" <<Circle :: getDiameter() << endl;
    cout << "circumference" << Circle :: getCircumference()<<endl;
    cout << "height:" << getHeight() << endl;
    cout << "area:" << getArea() << endl;
    cout << "volumn:" << getVolume() << endl;
}
