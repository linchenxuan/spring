#pragma once

#include "IBrush.h"

class PaddingBrush : public IBrush
{
public:
    virtual void DrawTriangle(const Triangle3i &a, TGAColor color) override;
    virtual void DrawOBJModel(std::shared_ptr<IModel> model, TGAColor color) override;
    PaddingBrush(TGAImage *image) : IBrush(image){};
    ~PaddingBrush(){};
};
