#pragma once

#include "IBrush.h"

class PaddingBrush : public IBrush
{
public:
    virtual void DrawTriangle(Triangle2i a, TGAImage &image, TGAColor color) override;
    virtual void DrawOBJModel(IModel *model, TGAImage &image, TGAColor color) override{};
    PaddingBrush(){};
    ~PaddingBrush(){};
};
