//
// Created by PedroFonseca on 20/03/2023.
//

#include "Point3.h"
#include "Vector3.h"
#include <iostream>

using namespace std;

Point3::Point3() : Tuple(3) {

}

Point3::Point3(double *data) : Tuple(3, data) {

}

Point3::Point3(double x, double y, double z) : Tuple(3) {
    data[0] = x;
    data[1] = y;
    data[2] = z;
}

Point3 Point3::operator+(Vector3 v) {
    Point3 result;
    double *vdata = v.getData();
    for (int i = 0; i < nElements; i++) {
        result.data[i] = this->data[i] + vdata[i];
    }
    return result;
}

Vector3 operator-(Point3 other) {
    Vector3 v;

    for (int i = 0; i < 3; i++) {
        v.data[i] = this->data[i] - other.data[i];
    }
    return v;
}



