#include <Square.h>
#include <iostream>

void Square::draw() const
{
    std::cout << "Draw Square side:"<< side_ << "center:" << center_ << std::endl;
}