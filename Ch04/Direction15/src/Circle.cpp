#include <Circle.h>
/* 몇몇 그래픽 라이브러리 */
#include <iostream>

void Circle::draw() const
{
    std::cout << "Draw Circle radius:" << radius_ << "center:" << center_ << std::endl;
}