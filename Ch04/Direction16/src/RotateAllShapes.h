#ifndef __ROTATE_ALL_SHAPES_H__
#define __ROTATE_ALL_SHAPES_H__
#include <memory>

#include <vector>

class Shape;

void rotateAllShapes(std::vector<std::unique_ptr<Shape>> const& shapes);
#endif