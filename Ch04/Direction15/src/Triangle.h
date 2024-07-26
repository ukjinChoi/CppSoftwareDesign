#ifndef __TRIANGLE_H__
#define __TRIANGLE_H__

#include <Shape.h>
#include <Point.h>

class Triangle : public Shape
{
public:
    explicit Triangle(double side)
    : Shape(triangle), side_(side)
    {
        /* 주어진 side가 유효한지 확인한다. */
    }
    double side() const { return side_; }
    Point center() const { return center_; }
private:
    double side_;
    Point center_;
};
#endif