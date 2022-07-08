#pragma once

#include "Vector2.hpp"
#include "tgaimage.h"

class IBrush
{
public:
   virtual void DrawLine(Point2i a, Point2i b, TGAImage &image, TGAColor color) = 0;
   virtual ~IBrush() = 0;
};
