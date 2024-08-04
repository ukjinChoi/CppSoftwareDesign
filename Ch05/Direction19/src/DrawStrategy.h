#ifndef __DRAW_STRATEGY_H__
#define __DRAW_STRATEGY_H__

class Circle;
class Square;

class DrawStrategy
{
public:
    virtual ~DrawStrategy() = default;
    virtual void draw(Circle const& circle) const = 0;
    virtual void draw(Square const& square) const = 0;
};
#endif