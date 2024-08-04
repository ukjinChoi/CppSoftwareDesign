#ifndef __ROTATE_H__
#define __ROTATE_H__
#include <ShapeVisitor.h>

class Circle;
class Shape;
class Triangle;

class Rotate : public ShapeVisitor
{
public:
    void visit(Circle const& c) const override;
    void visit(Square const& s) const override;
    void visit(Triangle const& t) const override;
};
#endif