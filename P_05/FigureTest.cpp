//
// Created by pf on 09/03/23.
//
#include <iostream>
#include "Figure.h"

int main()
{
  Figure f1;    // Default figure
  Figure f2(Point(2,0));  // Figure with center and no color defined
  Figure f3("Green");

  cout << "f1: " << f1 << endl;
  cout << "f2: " << f2 << endl;
  cout << "f3: " << f3 << endl;

}