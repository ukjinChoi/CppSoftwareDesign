// ---- <main.cpp> ----

#include <Circle.h>
#include <Square.h>
#include <memory>
#include <vector>

using Shapes = std::vector<std::unique_ptr<Shape>>;

void drawAllShapes(const Shapes& shapes)
{
    for (auto&& shape : shapes)
    {
        shape->draw();
    }
}

int main()
{

    // 도형 몇 개를 생성한다.
    Shapes shapes;
    shapes.emplace_back(std::make_unique<Circle>(2.3));
    shapes.emplace_back(std::make_unique<Square>(1.2));
    shapes.emplace_back(std::make_unique<Circle>(4.1));

    // 모든 도형을 그린다.
    drawAllShapes(shapes);

    return 0;
}
