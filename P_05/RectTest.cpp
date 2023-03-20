//
// Created by pf on 14/03/23.
//

#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
    cout << "RectTest. File: " << __FILE__ << ", Date: " <<  __DATE__ << endl;

    Rectangle R1;
    Rectangle R2(3.0, 3.4,Point(2,3),"red");

    cout << R2;
}