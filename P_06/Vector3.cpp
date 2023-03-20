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



