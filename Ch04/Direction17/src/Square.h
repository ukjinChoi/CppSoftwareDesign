// ---- <Square.h> ----
#ifndef __SQUARE_H__
#define __SQUARE_H__
class Square
{
public:
    explicit Square(double side)
    : side_(side)
    {
        /* 주어진 side 길이가 유효한지 확인한다 */
    }
    double side() const { return side_; }
private:
    double side_;
};
#endif
