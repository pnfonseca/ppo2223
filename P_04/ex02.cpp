//
// Created by PedroFonseca on 01/03/2023.
//
#include <iostream>
#include "Complex.h"

using namespace std;

int main(){

    // Create some complex numbers
    Complex z1(1,2);
    Complex z2(0,1);


    // Show them
    cout << "z1: " << z1 << endl;
    cout << "z2: " << z2 << endl;
    Complex z3(z1+z2);
    cout << "z3=z1+z2=" << z3 << endl;
    Complex z4 = z3.conjugate();
    cout << "z4 = z3 conjugate=" << z4 << endl;

    Complex z5 = z3 - z4;
    cout << "z5 = z3 - z4 =" << z5 << endl;

    Complex z6 = z1*z2;
    cout << "z6 = z1*z2 = " << z6 << endl;

    Complex z7 = z6/z2;
    cout << "z7 = z6/z2 = " << z7 << endl;

    
}