//
// Created by pf on 14/03/23.
//

#ifndef P_05_RECTANGLE_H
#define P_05_RECTANGLE_H

#include "Figure.h"

class Rectangle : public Figure {
private:
    double length;
    double width;

public:
    Rectangle();
    Rectangle(double w, double l, Point c, const string &color="");

    friend ostream &operator <<(ostream& os, const Rectangle &r);
};


#endif //P_05_RECTANGLE_H
