// ---- <DrawAllShapes.h> ----
#ifndef __DRAW_ALL_SHAPES_H__
#define __DRAW_ALL_SHAPES_H__
#include <memory>
#include <vector>

class Shape;

void drawAllShapes(std::vector<std::unique_ptr<Shape>> const& shapes);
#endif