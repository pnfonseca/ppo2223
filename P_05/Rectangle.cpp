//
// Created by pf on 14/03/23.
//

#include "Rectangle.h"

Rectangle::Rectangle() : Figure(), width(0), length(0) {

}

Rectangle::Rectangle(double w, double l, Point c, const string &color) :
width(w), length(l), Figure(c, color)
{

}

ostream &operator<<(ostream &os, const Rectangle &r) {
    os << "[" << r.length << "x" << r.width << "]@" << r._center << ", color: " << r._color;
    return os;
}
