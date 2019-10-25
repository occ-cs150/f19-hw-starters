/*
 *  Point.h
 *  @author Stephen Gilbert
 *  @version Fall 2019
 *  Base class for CS 150 HW
 */

#ifndef POINT_H_
#define POINT_H_
#include <string>

class Point
{
public:
    /**
     * Construct a point object
     * @param x the horizontal value (defaults to 0)
     * @param y the vertical value (defaults to 0)
     */
    Point(double x = 0, double y = 0);

    /**
     * Moves a Point object
     * @param dx the amount to move x.
     * @param dy the amount to move y.
     */
    void move(double dx, double dy);

    /**
     * Returns the x value.
     * @return the x value.
     */
    double getX() const;

    /**
     * Returns the y value.
     * @return the y value.
     */
    double getY() const;

    /**
     * Returns the string representation.
     * @param decimals the number of decimal places to display
     *      If set to 0, then no decimals are shown including the .
     */
    virtual std::string toString(int decimals = 2) const;

    /**
        Virtual inline destructor.
    */
    virtual ~Point() = default;
private:
    double x;
    double y;
};

#endif /* POINT_H_ */
