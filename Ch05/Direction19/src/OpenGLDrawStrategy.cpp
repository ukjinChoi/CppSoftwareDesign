#include <OpenGLDrawStrategy.h>

#include <Circle.h>
#include <Square.h>

#include <iostream>

void OpenGLDrawStrategy::draw(Circle const& circle) const
{
    std::cout << "draw OpenGL Cricle :" << circle.radius() << std::endl;
}

void OpenGLDrawStrategy::draw(Square const& square) const
{
    std::cout << "draw OpenGL Square :" << square.side() << std::endl;
}