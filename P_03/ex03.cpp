//
// Created by pf on 28/02/23.
//
// Start with the Power() function from the previous exercise, which works only with type
//double. Create a series of overloaded functions with the same name that, in addition to
//double, also work with types short, int, long, and float. Write a program that
//tests these overloaded functions with all argument types.

//
// Created by pf on 28/02/23.
//

// Raising a number n to a power p is the same as multiplying n by itself (p-1) times.
//Write a function called Power()that takes a double value for n and an unsigned
//int value for p, and returns the result as a double value. Use a default argument of 2
//for p, so that if this argument is omitted, the number n will be squared. Write a program
//that gets values from the user to test this function.
#include <iostream>

using namespace std;

double Power(double val, unsigned int p = 2);


int main() {
    cout << "PPO, Class #3, Ex. 2" << endl;

    double doubleVal;
    float floatVal = 1.414;
    int intVal = 3;
    unsigned int power;

    cout << "Number: ";
    cin >> doubleVal;
    cout << "Power: ";
    cin >> power;

    cout << doubleVal << "^" << power << "= " << Power(doubleVal, power) << endl;
    cout << doubleVal << "^2" << "= " << Power(doubleVal) << endl;
    cout << Power(intVal) << endl;
    cout << Power(floatVal) << endl;

}

double Power(double val, unsigned int p) {
    if (p > 0) {
        return val * Power(val, p - 1);
    } else {
        return 1;
    }
}
