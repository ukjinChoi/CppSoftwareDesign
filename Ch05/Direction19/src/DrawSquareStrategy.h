#ifndef __DRAW_SQUARE_STRATEGY_H__
#define __DRAW_SQUARE_STRATEGY_H__

class Square;

class DrawSquareStrategy
{
public:
    virtual ~DrawSquareStrategy() = default;
    virtual void draw(Square const& square) const = 0;
};
#endif