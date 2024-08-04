#ifndef __OPEN_GL_DRAW_STRATEGY_H__
#define __OPEN_GL_DRAW_STRATEGY_H__
#include <DrawStrategy.h>

class OpenGLDrawStrategy : public DrawStrategy
{
public:
    void draw(Circle const& circle) const override;
    void draw(Square const& square) const override;
};
#endif