// ---- <Shape.h> ----
#ifndef __SHAPE_H__
#define __SHAPE_H__

class ShapeVisitor;
class Shape
{
public:
    virtual ~Shape() = default;
    virtual void accept(ShapeVisitor const& v) = 0;    
};
#endif