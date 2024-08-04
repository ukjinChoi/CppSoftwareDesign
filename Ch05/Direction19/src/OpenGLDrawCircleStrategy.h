#ifndef __OPEN_GL_DRAW_CIRCLE_STRATEGY_H__
#define __OPEN_GL_DRAW_CIRCLE_STRATEGY_H__

#include <DrawStrategy.h>
#include <Circle.h>

class OpenGLDrawCircleStrategy : public DrawStrategy<Circle>
{
public:
    void draw(Circle const& circle) const override;
};
#endif