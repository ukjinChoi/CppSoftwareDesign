// ---- <Circle.h> ----
#ifndef __CIRCLE_H__
#define __CIRCLE_H__
#include <Point.h>
#include <Shape.h>

class Circle : public Shape
{
public:
    explicit Circle (double radius)
    : Shape(circle)
    , radius_ (radius)
    {
        /* 주어진 radius가 유효한지 확인한다. */
    }
    double radius() const { return radius_; }
    Point center() const { return center_; }
private:
    double radius_;
    Point center_{};
};

#endif