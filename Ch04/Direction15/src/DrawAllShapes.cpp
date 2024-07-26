// ---- <DrawAllShapes.cpp> ----

#include <DrawAllShapes.h>
#include <Circle.h>
#include <Square.h>
#include <Triangle.h>

void drawAllShapes(std::vector<std::unique_ptr<Shape>> const& shapes)
{
    for (auto const& shape : shapes)
    {
        switch(shape->getType())
        {
            case circle:
                draw(static_cast<Circle const&>(*shape));
                break;
            case square:
                draw(static_cast<Square const&>(*shape));
                break;
            case triangle:
                draw(static_cast<Triangle const&>(*shape));
                break;
        }
    }
}
