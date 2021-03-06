#include "circle.h"
#include <cmath>
Circle :: Circle(int x, int y, double r1): Point(x,y)
{
    radius = r1;
}

void Circle :: setRadius(double r)
{
    radius = r;
}
double Circle ::  getRadius() const
{
    return radius;
}//半徑
double Circle ::  getDiameter() const
{
    return  2 * radius;
}//直徑
double Circle :: getCircumference() const //圓周長
{
    return 2 * radius * M_PI;
}
double Circle :: getArea() const
{
    return radius * radius * M_PI;
}
string Circle :: getName() const
{
    return "Circle";
} //return the name of shape (i.e. “Circle”)
void Circle :: print() const
{
    cout << getName() << endl;
    cout << "center:(" << Point::getX() << "," << Point :: getY() << ")" << endl;
    cout << "radius:" << radius << endl;
    cout << "diameter:" << getDiameter() << endl;
    cout << "area:" << getArea() << endl;

}
