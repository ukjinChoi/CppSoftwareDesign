#include <OpenGLDrawSquareStrategy.h>

#include <Square.h>

#include <iostream>

void OpenGLDrawSquareStrategy::draw(Square const& square) const
{
    std::cout << "draw OpenGL Square :" << square.side() << std::endl;
}
