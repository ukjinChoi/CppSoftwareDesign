// ---- <main.cpp> ----

#include <Circle.h>
#include <Square.h>
#include <Triangle.h>
#include <DrawAllShapes.h>
#include <memory>
#include <vector>

int main()
{
    using Shapes = std::vector<std::unique_ptr<Shape>>;

    // 도형 몇 개를 생성한다.
    Shapes shapes;
    shapes.emplace_back(std::make_unique<Circle>(2.3));
    shapes.emplace_back(std::make_unique<Square>(1.2));
    shapes.emplace_back(std::make_unique<Circle>(4.1));
    shapes.emplace_back(std::make_unique<Triangle>(1.9));

    // 모든 도형을 그린다.
    drawAllShapes(shapes);

    return 0;
}
