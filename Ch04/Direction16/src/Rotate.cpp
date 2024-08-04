#include <Rotate.h>

#include <Circle.h>
#include <Square.h>
#include <Triangle.h>

#include <iostream>

void Rotate::visit(Circle const& c) const
{
    std::cout << "Rotate Circle radius:" << c.radius() << std::endl;
}

void Rotate::visit(Square const& s) const
{
    std::cout << "Rotate Square side:" << s.side() << std::endl;
}

void Rotate::visit(Triangle const& t) const
{
    std::cout << "Rotate Triangle side:" << t.side() << std::endl;
}