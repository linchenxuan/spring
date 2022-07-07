#include "IBrush.h"

class MeshBrush : public IBrush
{
public:
    virtual void DrawLine(const Point& a,const Point& b, TGAImage &image, TGAColor color)override;
    MeshBrush(){};
    ~MeshBrush(){};
};
