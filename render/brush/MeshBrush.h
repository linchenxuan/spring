#pragma once

#include "IBrush.h"

class MeshBrush : public IBrush
{
public:
    virtual void DrawTriangle(const Triangle3i &a, TGAColor color) override;
    virtual void DrawOBJModel(std::shared_ptr<IModel> model, TGAColor color) override;
    MeshBrush(TGAImage *image) : IBrush(image){};
    ~MeshBrush(){};
};
