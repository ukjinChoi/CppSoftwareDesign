// ---- <DrawAllShapes.cpp> ----

#include <DrawAllShapes.h>
#include <Draw.h>

void drawAllShapes(Shapes const& shapes)
{
    for (auto const& shape : shapes)
    {
#if 1
		std::visit(Draw{}, shape);
#else // faster but complicated
		if (Circle* circle = std::get_if<Circle>(&shape))
		{
			// Draw Circle
		}
		else if (Square* square = std::get_if<Square>(&shape))
		{
			// Draw Square
		}
#endif
    }
}
