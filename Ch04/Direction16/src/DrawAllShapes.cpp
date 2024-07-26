// ---- <DrawAllShapes.cpp> ----

#include <DrawAllShapes.h>
#include <Circle.h>
#include <Square.h>
#include <Draw.h>

void drawAllShapes(std::vector<std::unique_ptr<Shape>> const& shapes)
{
    for (auto const& shape : shapes)
    {
        shape->accept(Draw{});
    }
}
