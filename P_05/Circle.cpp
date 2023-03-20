//
// Created by pf on 09/03/23.
//

#include "Circle.h"

Circle::Circle() : Figure(), radius(0) {

}

Circle::Circle(Point center, const string& color, double rad) : Figure(center,color), radius(rad)
{
}

Circle::Circle(double x, double y, const string& color, double rad) : Circle(Point(x,y),color,rad)
{

}

ostream &operator<<(ostream &os, Circle c) {
  os << (Figure) c << " Radius: " << c.radius;
  return os;
}
