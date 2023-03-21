//
// Created by PedroFonseca on 20/03/2023.
//

#include "Tuple.h"
#include <iostream>

using namespace std;

// Dangerous!
// Left to the user guarantee that data has enough elements!
Tuple::Tuple(size_t nElements, const double *data) : nElements(nElements) {
    this->data = new double[nElements];
    for (size_t i = 0; i < nElements; i++) {
        this->data[i] = data[i];
    }

}

// When only the size is defined, all values initialized to zero
Tuple::Tuple(size_t nElements) : nElements(nElements) {
    data = new double[nElements];
    for (size_t i = 0; i < nElements; i++) {
        data[i] = 0;
    }

}

// Void initializer
// By default, Tuple is 2-D and all data initialized to zero
Tuple::Tuple() : Tuple(2) {

}

// Copy constructor
Tuple::Tuple(const Tuple &other) : Tuple(other.nElements, other.data){
}

// Operators
Tuple &Tuple::operator=(const Tuple &other) {
    // Confirm that we are dealing with another object
    if(this != &other){
        this->nElements = other.nElements;
        for(size_t i=0; i<this->nElements; i++){
            this->data[i] = other.data[i];
        }
    }
    return *this;
}

ostream &operator<<(ostream &os, Tuple t) {
    os << "[";
    for (size_t i = 0; i < t.nElements; i++) {
        os << t.data[i];
        if (i < t.nElements - 1) {
            os << ",";
        }
    }
    os << "]";
    return os;
}

bool Tuple::operator==(Tuple other) {

    bool result;
    result = true;

    if(this->nElements!= other.nElements){
        result = false;
    }
    else {
        for (size_t i = 0; i < this->nElements; i++) {
            if (this->data[i] != other.data[i]) {
                result = false;
            }
        }

    }
    return result;
}

bool Tuple::operator!=(Tuple other) {
    return !(*this==other);
}

double* Tuple::getData() const {
    return data;
}

size_t Tuple::getNElements() const {
    return nElements;
}
