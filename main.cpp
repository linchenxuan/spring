#include "render/brush/MeshBrush.h"
#include "render/model/OBJModel.h"
#include <memory>
#include <iostream>

constexpr int width = 300;
constexpr int height = 300;

const TGAColor white = TGAColor(255, 255, 255, 255);
const TGAColor red = TGAColor(255, 0, 0, 255);

int main()
{
    TGAImage image(width, height, TGAImage::RGB);
    std::unique_ptr<IBrush> brush = std::make_unique<MeshBrush>();
    brush->DrawTriangle(Triangle2i{{180, 150}, {120, 160}, {130, 180}}, image, red);
    image.write_tga_file("output.tga");
}