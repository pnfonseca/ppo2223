//
// Created by PedroFonseca on 20/03/2023.
//

#ifndef P_06_TUPLE_H
#define P_06_TUPLE_H


#include <cstddef>
#include <ostream>

using namespace std;

class Tuple {
public:
    Tuple(size_t nElements);
    Tuple(size_t nElements, const double *data);
    Tuple();
    Tuple(const Tuple & other);

public:
    double *getData() const;
    size_t getNElements() const;

    friend ostream& operator << (ostream& os, Tuple t);

    // Copy constructor
    Tuple& operator = (const Tuple &other);

    // Comparison operators
    bool operator ==(Tuple other);
    bool operator !=(Tuple other);

protected:
    size_t nElements;
    double *data;
};


#endif //P_06_TUPLE_H
