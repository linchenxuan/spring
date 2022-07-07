#include "IBrush.h"

class MeshBrush : public IBrush
{
public:
    virtual void DrawLine(Point a,Point b, TGAImage &image, TGAColor color)override;
    MeshBrush(){};
    ~MeshBrush(){};
};
