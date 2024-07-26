#include <DrawSquare.h>
#include <Square.h>
/* 몇몇 그래픽 라이브러리 */
#include <iostream>


void draw(Square const& s)
{
    // .... 정사각형을 그리는 논리 구조를 구현한다.
    std::cout << "Draw Square side:"<< s.side() << "center:" << s.center() << std::endl;
}

