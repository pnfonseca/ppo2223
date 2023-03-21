//
// Created by PedroFonseca on 20/03/2023.
//

#ifndef P_06_VECTOR3_H
#define P_06_VECTOR3_H

#include "Tuple.h"

class Vector3 : public Tuple {
public:
    Vector3();

    Vector3(double *data);

    Vector3(double x, double y, double z);

    // Operators:
    Vector3 operator+(const Vector3 &other);
    Vector3 operator-(const Vector3 &other);
    Vector3 operator*(const double& k);
    double operator*(const Vector3 &other);


};


#endif //P_06_VECTOR3_H
