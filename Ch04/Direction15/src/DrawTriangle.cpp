#include <DrawTriangle.h>
#include <Triangle.h>
#include <iostream>

void draw(Triangle const& t)
{
    std::cout << "Draw Triangle side:" << t.side() << "center:" << t.center() << std::endl;
}