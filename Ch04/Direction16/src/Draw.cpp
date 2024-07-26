#include <Draw.h>
#include <Circle.h>
#include <Square.h>

#include <iostream>

void Draw::visit(Circle const& c /*, ... */) const
{
    std::cout << "Draw Circle radius:" << c.radius() << std::endl;
}

void Draw::visit(Square const& s /*, ... */) const
{
    std::cout << "Draw Square side:" << s.side() << std::endl;
}