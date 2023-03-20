//
// Created by pf on 09/03/23.
//

#ifndef P_05_CIRCLE_H
#define P_05_CIRCLE_H

#include "Figure.h"

class Circle : public Figure {
protected:
  double radius;

public:
  Circle();
  Circle(Point center, const string& color, double rad);
  Circle(double x, double y, const string& color, double rad);

  friend ostream& operator << (ostream& os, Circle c);
};


#endif //P_05_CIRCLE_H
