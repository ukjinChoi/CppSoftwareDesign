#include <OpenGLDrawCircleStrategy.h>

#include <Circle.h>

#include <iostream>

void OpenGLDrawCircleStrategy::draw(Circle const& circle) const
{
    std::cout << "draw OpenGL Cricle :" << circle.radius() << std::endl;
}
