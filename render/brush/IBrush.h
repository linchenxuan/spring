#pragma once

#include "Vector2.hpp"
#include "tgaimage.h"
#include "IModel.h"

class IBrush
{
public:
   virtual void DrawLine(Point2i a, Point2i b, TGAImage &image, TGAColor color) = 0;
   virtual void DrawTriangle(Triangle2i a, TGAImage &image, TGAColor color) = 0;
   virtual void DrawOBJModel(IModel *model, TGAImage &image, TGAColor color) = 0;
   virtual ~IBrush() = 0;
};
