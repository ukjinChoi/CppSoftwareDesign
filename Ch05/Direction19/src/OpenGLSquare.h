#ifndef __OPENGL_SQUARE_H__
#define __OPENGL_SQUARE_H__
#include <Square.h>

class OpenGLSquare : public Square
{
public:
    explicit OpenGLSquare( double side )
    : Square( side )
    {}
    void draw() const override;
};
#endif