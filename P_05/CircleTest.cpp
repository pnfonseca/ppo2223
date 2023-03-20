//
// Created by pf on 09/03/23.
//
#include <iostream>
#include "Circle.h"
int main()
{
  Circle c1;
  Circle c2(Point(0,0),"white",1);
  Circle c3(3,4,"#ff0000",2.4);

  cout << "c1: " << c1 << endl;
  cout << "c2: " << c2 << endl;
  cout << "c3: " << c3 << endl;

}
