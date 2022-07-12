#pragma once

#include "IBrush.h"

class MeshBrush : public IBrush
{
public:
    virtual void DrawTriangle(const Triangle2i &a, TGAImage &image, TGAColor color) override;
    virtual void DrawOBJModel(std::shared_ptr<IModel> model, TGAImage &image, TGAColor color) override;
    MeshBrush(){};
    ~MeshBrush(){};
};
