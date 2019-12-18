#include <iostream>
#include "shape.h"
#include "circle.h"
#include "point.h"
#include "cylinder.h"
#include <vector>
#include <typeinfo>
using namespace std;
void process(Shape *shape){
    shape->print();
    shape->getName();

    Circle *c1;
    c1 = dynamic_cast<Circle *>(shape);
    if(c1){
        c1->getArea();
    }
    Cylinder *cy1;
    cy1 = dynamic_cast<Cylinder *>(shape);
    if(cy1){
        cy1->getVolume();
    }
}
int main()
{
    Point p1;
    Circle c1;
    Cylinder cy1;
    p1.print();
    c1.print();
    cy1.print();
    vector<Shape *> shapeVector;
    shapeVector.push_back(&p1);
    shapeVector.push_back(&c1);
    shapeVector.push_back(&cy1);
    cout << shapeVector.size() << endl;
    for(unsigned int i = 0; i < shapeVector.size(); i++){
        process(shapeVector.at(i));
    }
    return 0;
}
