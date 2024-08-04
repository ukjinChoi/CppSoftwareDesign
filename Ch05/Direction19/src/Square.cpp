#include <Square.h>
#include <iostream>

void Square::draw() const
{
    std::cout << "Draw Square side : " << side() << std::endl;
}