#ifndef __SHAPE_VISITOR_H__
#define __SHAPE_VISITOR_H__

class Circle;
class Square;

class ShapeVisitor
{
public:
    virtual ~ShapeVisitor() = default;
    virtual void visit(Circle const& /*, ... */) const = 0;
    virtual void visit(Square const& /*, ... */) const = 0;
    // 각 구체 도형에 대해 하나씩, 더 많은 visit() 함수가 있을 수 있다.
};
#endif