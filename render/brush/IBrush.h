#pragma once

#include "Vector2.hpp"
#include "tgaimage.h"
#include "IModel.h"
#include <memory>

class IBrush
{
public:
   virtual void DrawLine(Point2i a, Point2i b, TGAImage &image, TGAColor color);
   virtual void DrawTriangle(const Triangle2i &a, TGAImage &image, TGAColor color) = 0;
   virtual void DrawOBJModel(std::shared_ptr<IModel> model, TGAImage &image, TGAColor color) = 0;
   virtual ~IBrush() = 0;
};
