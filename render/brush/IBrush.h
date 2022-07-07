#include "Vector2.h"
#include "tgaimage.h"

class IBrush
{
public:
   virtual void DrawLine(const Point& a,const Point& b, TGAImage &image, TGAColor color)= 0;
   virtual ~IBrush() = 0;
};

