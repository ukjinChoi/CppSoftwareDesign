#ifndef __SHAPE_H__
#define __SHAPE_H__

class Shape
{
    public:
    virtual ~Shape() = default;
    virtual void draw( /* 몇몇 인자 */ ) const = 0;
};

#endif