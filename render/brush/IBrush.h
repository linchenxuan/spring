#pragma once

#include "Vector3.hpp"
#include "Vector2.hpp"
#include "tgaimage.h"
#include "IModel.h"
#include <memory>

class IBrush
{
protected:
   TGAImage *image;
   std::vector<int> zBuffer;

public:
   IBrush(TGAImage *image)
   {
      this->zBuffer = std::vector<int>(image->width() * image->height());
      this->image = image;
   };
   virtual void DrawLine(Point2i a, Point2i b, TGAColor color);
   virtual void DrawTriangle(const Triangle3i &a, TGAColor color) = 0;
   virtual void DrawOBJModel(std::shared_ptr<IModel> model, TGAColor color) = 0;
   virtual ~IBrush() = 0;
};
