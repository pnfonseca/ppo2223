//
// Created by pf on 09/03/23.
//

#ifndef P_05_FIGURE_H
#define P_05_FIGURE_H

#include <string>
#include "Point.h"

class Figure {
protected:
  Point _center;
  string _color;

public:
  Figure();
  Figure(Point c, const string &color="");
  Figure(double x, double y, string color="");
  Figure(const string& color);


  friend ostream &operator <<(ostream& os, const Figure &f);
};


#endif //P_05_FIGURE_H
