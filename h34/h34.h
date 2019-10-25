/*
 *  h21.h
 *  @author your name goes here
 *  @version your section and day
 *  Point->Circle->Cylinder
 */

#ifndef H21_H_
#define H21_H_

#include "point.h"
#include <cmath>
#include <string>

// Use this for PI
const double PI = std::acos(-1.0);

//////// Put your class definitions here /////////////////////
// Put Circle first, then Cylinder
class Circle : public Point
{
public:
    Circle(double x, double y, double r);
    double getRadius() const;
    virtual double getArea() const;
    double getCircumference() const;
    virtual std::string toString(int decimals=2) const override;
private:
    double radius;
};

class Cylinder : public Circle
{
public:
    Cylinder(double h, double r, double x, double y);
    double getHeight() const;
    double getVolume() const;
    virtual double getArea() const override;
    virtual std::string toString(int decimals=2) const override;
private:
    double height;
};


#endif
