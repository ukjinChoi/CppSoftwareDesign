#ifndef __OPENGL_CIRCLE_H__
#define __OPENGL_CIRCLE_H__

#include <Circle.h>

class OpenGLCircle : public Circle
{
public:
    explicit OpenGLCircle( double radius )
    : Circle(radius)
    {}

    void draw() const override;
};
#endif