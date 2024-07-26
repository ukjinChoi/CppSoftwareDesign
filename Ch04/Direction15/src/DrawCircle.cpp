// ---- <DrawCircle.cpp> ----

#include <DrawCircle.h>
#include <Circle.h>
/* 몇몇 그래픽 라이브러리 */
#include <iostream>

void draw(Circle const& c)
{
    // 원을 그리는 논리 구조를 구현한다
    std::cout << "Draw Circle radius:" << c.radius() << "center:" << c.center() << std::endl;
}