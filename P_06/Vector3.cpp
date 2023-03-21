//
// Created by PedroFonseca on 20/03/2023.
//

#include "Vector3.h"

Vector3::Vector3() : Tuple(3) {

}

Vector3::Vector3(double *data) : Tuple(3, data) {

}

Vector3::Vector3(double x, double y, double z) : Tuple(3) {
    data[0] = x;
    data[1] = y;
    data[2] = z;
}

Vector3 Vector3::operator+(const Vector3 &other) {
    // Create object with "this" value
    Vector3 vTmp(*this);
    // Add other data to this data
    for(size_t i=0; i<nElements; i++){
        vTmp.data[i] += other.data[i];
    }
    // Return result
    return vTmp;
}

Vector3 Vector3::operator-(const Vector3 &other) {
    // Create object with "this" value
    Vector3 vTmp(*this);
    // Subtract other data to this data
    for(size_t i=0; i<nElements; i++){
        vTmp.data[i] -= other.data[i];
    }
    // Return result
    return vTmp;
}

Vector3 Vector3::operator*(const double &k) {
    // Create object with "this" value
    Vector3 vTmp(*this);
    // Multiply this data by k
    for(size_t i=0; i<nElements; i++){
        vTmp.data[i] *= k;
    }
    // Return result
    return vTmp;
}

double Vector3::operator*(const Vector3 &other) {
    double res=0;
    for(size_t i=0; i<nElements; i++){
        res += this->data[i] * other.data[i];
    }
    return res;
}



