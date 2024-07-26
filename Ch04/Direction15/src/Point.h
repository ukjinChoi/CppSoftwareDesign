// ---- <Point.h> ------
#ifndef __POINT_H__
#define __POINT_H__
struct Point
{
    double x;
    double y;
};
#include <iostream>

std::ostream& operator<<(std::ostream& os, const Point& p);
#endif