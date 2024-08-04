#ifndef __OPEN_GL_DRAW_CIRCLE_STRATEGY_H__
#define __OPEN_GL_DRAW_CIRCLE_STRATEGY_H__
#include <DrawCircleStrategy.h>

class OpenGLDrawCircleStrategy : public DrawCircleStrategy
{
public:
    void draw(Circle const& circle) const override;
};
#endif