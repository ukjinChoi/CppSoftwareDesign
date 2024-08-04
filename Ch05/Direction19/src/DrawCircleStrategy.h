#ifndef __DRAW_CIRCLE_STRATEGY_H__
#define __DRAW_CIRCLE_STRATEGY_H__

class Circle;

class DrawCircleStrategy
{
public:
    virtual ~DrawCircleStrategy() = default;
    virtual void draw(Circle const& circle) const = 0;
};
#endif