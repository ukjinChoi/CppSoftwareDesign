#ifndef __DRAW_H__
#define __DRAW_H__
#include <ShapeVisitor.h>

class Draw : public ShapeVisitor
{
public:
    void visit(Circle const& c /*, ... */) const override;
    void visit(Square const& s /*, ... */) const override;
    void visit(Triangle const& s /*, ... */) const override;
    // 각 구체 도형에 대해 하나씩 더 많은 visit() 함수가 있을 수 있다.
};
#endif