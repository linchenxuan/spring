#pragma once

#include "IBrush.h"

class MeshBrush : public IBrush
{
public:
    virtual void DrawLine(Point2i a, Point2i b, TGAImage &image, TGAColor color) override;
    MeshBrush(){};
    ~MeshBrush(){};
};
