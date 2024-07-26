// ---- <Circle.h> ----
#ifndef __CIRCLE_H__
#define __CIRCLE_H__
#include <Point.h>
#include <Shape.h>

class Circle : public Shape
{
public:
    explicit Circle (double radius)
    : radius_ (radius)
    {
        /* 주어진 radius가 유효한지 확인한다. */
    }
    void draw() const override;
private:
    double radius_;
    Point center_{};
};

#endif