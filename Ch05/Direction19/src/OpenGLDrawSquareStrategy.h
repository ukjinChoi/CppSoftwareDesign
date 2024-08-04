#ifndef __OPEN_GL_DRAW_SQUARE_STRATEGY_H__
#define __OPEN_GL_DRAW_SQUARE_STRATEGY_H__
#include <DrawStrategy.h>
#include <Square.h>

class OpenGLDrawSquareStrategy : public DrawStrategy<Square>
{
public:
    void draw(Square const& square) const override;
};
#endif