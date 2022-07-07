#include "Vector2.h"
#include "tgaimage.h"

class IBrush
{
public:
   virtual void DrawLine( Point a, Point b, TGAImage &image, TGAColor color)= 0;
   virtual ~IBrush() = 0;
};

