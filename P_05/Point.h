//
// Created by PedroFonseca on 09/03/2023.
//

#ifndef P_05_POINT_H
#define P_05_POINT_H

#include <iostream>

using namespace std;

class Point {
protected:
    double _x;      // x coordinate of point
    double _y;      // y coordinate of point
public:
    Point();
    Point(double x, double y);
    double getX() const;
    double getY() const;
    void setX(double x);
    void setY(double y);

    friend ostream& operator <<(ostream &os, const Point &p);
};


#endif //P_05_POINT_H
