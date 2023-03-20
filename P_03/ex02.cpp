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

double Power(double val, unsigned int p=2);

int main()
{
    cout << "PPO, Class #3, Ex. 2" << endl;

    double val;
    unsigned int power;

    cout << "Number: ";
    cin >> val;
    cout << "Power: ";
    cin >> power;

    cout << val <<"^" << power << "= " << Power(val,power) << endl;
    cout << val <<"^2" << "= " << Power(val) << endl;

}

double Power(double val, unsigned int p)
{
    if(p>0){
        return val* Power(val,p-1);
    }
    else{
        return 1;
    }
}
