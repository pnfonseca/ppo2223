//
// Created by pf on 28/02/23.
//


#include <iostream>

using namespace std;

template<typename T>
T Power(T val, unsigned int p=2);

int main()
{
    cout << "PPO, Class #3, Ex. 4" << endl;

    double doubleVal;
    unsigned int power;

    cout << "Number: ";
    cin >> doubleVal;
    cout << "Power: ";
    cin >> power;

    cout << doubleVal << "^" << power << "= " << Power(doubleVal, power) << endl;
    cout << doubleVal << "^2" << "= " << Power(doubleVal) << endl;

}

template<typename T>
T Power(T val, unsigned int p)
{
    if(p>0){
        return val* Power(val,p-1);
    }
    else{
        return 1;
    }
}

