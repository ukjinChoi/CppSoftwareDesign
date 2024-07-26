#ifndef __TRIANGLE_H__
#define __TRIANGLE_H__

#include <Shape.h>
#include <Point.h>

class Triangle : public Shape
{
public:
    explicit Triangle(double side)
    : side_(side)
    {
        /* 주어진 side가 유효한지 확인한다. */
    }
    void draw() const override;
private:
    double side_;
    Point center_;
};
#endif