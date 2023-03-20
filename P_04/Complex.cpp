//
// Created by PedroFonseca on 01/03/2023.
//

#include "Complex.h"
#include <iostream>

using namespace std;

Complex::Complex(const double re, const double im) : Real(re), Imag(im) {

}

double Complex::getReal() {
    return Real;
}

double Complex::getImag() {
    return Imag;
}

Complex Complex::conjugate() {
    return Complex(Real, -Imag);
}

Complex Complex::operator+(Complex other) {
    return Complex(Real + other.Real, Imag + other.Imag);
}

Complex Complex::operator-(Complex other) {
    return Complex(Real - other.Real, Imag - other.Imag);
}

Complex Complex::operator*(Complex other) {
    double a = Real;
    double b = Imag;
    double c = other.Real;
    double d = other.Imag;
    double real = a * c - b * d;
    double imag = a * d - b * c;
    return Complex(real, imag);
}


Complex Complex::operator/(Complex other) {
    double a = Real;
    double b = Imag;
    double c = other.Real;
    double d = other.Imag;
    double real = (a * c + b * d) / (c * c + d * d);
    double imag = (b * c - a * d) / (c * c + d * d);

    return Complex(real, imag);
}

ostream &operator<<(ostream &out, Complex &z) {
    if (z.Imag > 0)
        out << z.Real << "+i" << z.Imag;
    else
        out << z.Real << "-i" << -z.Imag;
    return out;
}


