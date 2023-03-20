/**
 * @file Point.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

class Point
{
private:
    double x; 
    double y; 
public:
    Point(/* args */);
    Point(double, double);
    ~Point();
    void setCoords(float xval, float yval);
    float getX();
    float getY();
};



Point::Point()
{
    Point(0,0);
}

Point::Point(double xval, double yval)
{
    x = xval; 
    y = yval; 
}

Point::~Point()
{
}

void Point::setCoords(float xval, float yval)
{
    x = xval;
    y = yval; 
}

float Point::getX()
{
    return x;
}

float Point::getY()
{
    return y;
}

/// @brief 
class Circle
{
private:
    Point center; 
    float radius; 

public:
    // If nothing said, a circle is created with the center in (0,0) and radius 1
    Circle();
    // Create a circle by defining its center using coordinates (radius omitted, default=1)
    Circle(double xval, double yval);
    // Create a circle by defining its center as a Point (radius omitted, default=1)
    Circle(Point); 
    // Create a circle by defining is radius, center omitted (default=(0,0))
    Circle(double radius);

    ~Circle();

    float getX();
    float getY();
};

/// @brief Creates a new circle
/// 
/// If nothing said, circle is located in (0,0) with radius 1.
Circle::Circle()
{
   Circle(0,0);
}

Circle::Circle(double xval, double yval)
{
   center.setCoords(xval, yval);
   radius = 1;  
}

Circle::Circle(Point newCenter)
{
    center=newCenter; 
    radius=1;
}

Circle::~Circle()
{
}

float Circle::getX()
{
    return center.getX();
}

float Circle::getY()
{
    return center.getY();
}
