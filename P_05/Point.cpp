//
// Created by PedroFonseca on 09/03/2023.
//

#include "Point.h"

Point::Point() : _x(0), _y(0){

}

Point::Point(double x, double y): _x(x), _y(y) {

}

double Point::getX() const {
    return _x;
}

double Point::getY() const {
    return _y;
}

ostream &operator<<(ostream &os, const Point &p) {
    os << "(" << p._x << "," << p._y << ")";
    return os;
}

void Point::setX(double x) {
  _x = x;
}

void Point::setY(double y) {
  _y = y;
}

