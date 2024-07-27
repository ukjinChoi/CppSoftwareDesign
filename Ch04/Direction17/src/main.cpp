// ---- <main.cpp> ----

#include <Circle.h>
#include <Square.h>
#include <Shapes.h>
#include <DrawAllShapes.h>

int main()
{
    // 도형 몇 개를 생성한다.
    Shapes shapes;
    shapes.emplace_back(Circle(2.3));
    shapes.emplace_back(Square(1.2));
    shapes.emplace_back(Circle(4.1));

    // 모든 도형을 그린다.
    drawAllShapes(shapes);

    return 0;
}
