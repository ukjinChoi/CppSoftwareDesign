// ---- <Square.h> ----
#ifndef __SQUARE_H__
#define __SQUARE_H__
#include <Point.h>
#include <Shape.h>

class Square : public Shape
{
public:
    explicit Square(double side)
    : Shape(square)
    , side_(side)
    {
        /* 주어진 side 길이가 유효한지 확인한다 */
    }
    double side() const { return side_; }
    Point center() const { return center_; }
private:
    double side_;
    Point center_;
};
#endif