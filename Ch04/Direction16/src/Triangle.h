// ---- <Triangle.h> ----
#ifndef __TRIANGLE_H__
#define __TRIANGLE_H__
#include <Shape.h>
#include <ShapeVisitor.h>

class Triangle : public Shape
{
public:
    explicit Triangle(double side)
    : side_(side)
    {
        /* 주어진 side 길이가 유효한지 확인한다 */
    }
    void accept(ShapeVisitor const& v) { v.visit(*this); }
    double side() const { return side_; }
private:
    double side_;
};
#endif