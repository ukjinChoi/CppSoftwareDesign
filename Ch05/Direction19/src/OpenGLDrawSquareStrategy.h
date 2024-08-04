#ifndef __OPEN_GL_DRAW_SQUARE_STRATEGY_H__
#define __OPEN_GL_DRAW_SQUARE_STRATEGY_H__
#include <DrawSquareStrategy.h>

class OpenGLDrawSquareStrategy : public DrawSquareStrategy
{
public:
    void draw(Square const& square) const override;
};
#endif