#include <RotateAllShapes.h>
#include <Shape.h>
#include <Rotate.h>

void rotateAllShapes(std::vector<std::unique_ptr<Shape>> const& shapes)
{
    for (auto&& shape : shapes)
    {
        shape->accept(Rotate{});
    }
}
