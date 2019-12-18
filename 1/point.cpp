#include "point.h"

Point::Point(int x1,int y1)
{
    x = x1;
    y = y1;
}

void Point :: setX(int x1)
{
    x = x1;
}

void Point :: setY(int y1)
{
    y = y1;
}

int Point :: getX() const
{
    return x;
}

int Point :: getY() const
{
    return y;
}

string Point :: getName() const
{
    return "point";
}
void Point :: print() const
{
    cout << getName() << endl;
    cout << "posision:(" << getX() << "," <<  getY() << ")" << endl;
}
