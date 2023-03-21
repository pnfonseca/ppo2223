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

Point3 Point3::operator+(const Vector3& v) const {
    Point3 result;
    double *vdata = v.getData();
    for (size_t i = 0; i < nElements; i++) {
        result.data[i] = this->data[i] + vdata[i];
    }
    return result;
}

Vector3 Point3::operator-(Point3 other) {
    double v_data[3];
    for(size_t i=0; i<nElements; i++){
        v_data[i] = this->data[i] - other.data[i];
    }
    Vector3 v(v_data);
    return v;
}




