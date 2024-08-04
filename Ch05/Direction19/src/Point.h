#ifndef __POINT_H__
#define __POINT_H__

struct Point
{
    double x, y;
    Point() {}
    Point(double x, double y) : x(x), y(y) {}
};
#endif