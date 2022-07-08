#pragma once

#include "IBrush.h"

class MeshBrush : public IBrush
{
public:
    virtual void DrawLine(Point2i a, Point2i b, TGAImage &image, TGAColor color) override;
    virtual void DrawTriangle(Triangle2i a, TGAImage &image, TGAColor color) override;
    virtual void DrawOBJModel(IModel *model, TGAImage &image, TGAColor color) override;
    MeshBrush(){};
    ~MeshBrush(){};
};
