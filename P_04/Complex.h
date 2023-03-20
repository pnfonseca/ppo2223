//
// Created by PedroFonseca on 01/03/2023.
//

#ifndef AULA04_COMPLEX_H
#define AULA04_COMPLEX_H

#include <iostream>

using namespace std;

class Complex {
private:
    double Real;
    double Imag;

public:
    Complex(double re=0, double im=0);
    double getReal();
    double getImag();
    Complex conjugate();

    Complex operator +(Complex other);
    Complex operator -(Complex other);
    Complex operator*(Complex other);
    Complex operator/(Complex other);

    friend ostream & operator << (ostream &out, Complex &z);


};


#endif //AULA04_COMPLEX_H
