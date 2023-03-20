//
// Created by pf on 09/03/23.
//

#include "Figure.h"

Figure::Figure() {
  _center = Point(0, 0);
  _color = "";
}

Figure::Figure(Point c, const string &color) {
  _center = c;
  _color = color;
}

Figure::Figure(const string& color) : _center(Point(0, 0)), _color(color) {

}

ostream &operator<<(ostream &os, const Figure &f) {

  os << "center: " << f._center << ", color: " << (f._color.empty() ? "(none)" : f._color);
  return os;
}

Figure::Figure(double x, double y, string color) {
  _center = Point(x, y);
  _color = color;
}
