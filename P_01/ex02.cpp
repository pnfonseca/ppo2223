#include <iostream>
#include "geometry.cpp"

using namespace std; 

int main(){

    cout << "PpO 22-23 - Guião 1 - Ex. 2 " << endl;

    Circle c1(1,1);
    Point p(2,1);

    Circle c2(p);

    cout << "Center of c2:" << c2.getX() << ", " << c2.getY() << endl; 
}  

