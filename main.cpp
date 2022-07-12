#include "render/brush/PaddingBrush.h"
#include "render/brush/MeshBrush.h"
#include "render/model/OBJModel.h"
#include <memory>

constexpr int width = 1000;
constexpr int height = 1000;

const TGAColor white = TGAColor(255, 255, 255, 255);
const TGAColor red = TGAColor(255, 0, 0, 255);

int main()
{
    TGAImage image(width, height, TGAImage::RGB);
    std::unique_ptr<IBrush> brush = std::make_unique<PaddingBrush>(&image);
    std::shared_ptr<IModel> model = std::make_shared<OBJModel>("../resource/katarina/katarina01.obj");
    brush->DrawOBJModel(model, white);
    image.write_tga_file("output.tga");
}