//
// Created by PedroFonseca on 20/03/2023.
//

#ifndef P_06_POINT3_H
#define P_06_POINT3_H

#include "Tuple.h"
#include "Vector3.h"

class Point3 : public Tuple {
public:
    Point3();
    Point3(double* data);
    Point3(double x, double y, double z);

    // Operations
    // Point = Point + Vector
    Point3 operator+(const Vector3 & v) const;
//    // Vector = Point - Point
//    friend Vector3 operator-(Point3 other);
};


#endif //P_06_POINT3_H
