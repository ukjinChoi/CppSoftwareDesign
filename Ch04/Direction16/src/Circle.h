// ---- <Circle.h> ----
#ifndef __CIRCLE_H__
#define __CIRCLE_H__
#include <Shape.h>
#include <ShapeVisitor.h>

class Circle : public Shape
{
public:
    explicit Circle (double radius)
    : radius_ (radius)
    {
        /* 주어진 radius가 유효한지 확인한다. */
    }
    void accept(ShapeVisitor const& v) override { v.visit(*this); };
    double radius() const { return radius_; }
private:
    double radius_;
};

#endif