#include "render/brush/MeshBrush.h"
#include "render/model/OBJModel.h"
#include <memory>
#include <iostream>

constexpr int width = 1000;
constexpr int height = 1000;

const TGAColor white = TGAColor(255, 255, 255, 255);
const TGAColor red = TGAColor(255, 0, 0, 255);

int main()
{
    TGAImage image(width, height, TGAImage::RGB);
    std::unique_ptr<IBrush> brush = std::make_unique<MeshBrush>();
    std::unique_ptr<IModel> model = std::make_unique<OBJModel>("../resource/katarina/katarina01.obj");
    auto faces = model->GetFaces();
    auto vertexs = model->GetVertexs();

    for (int i = 0; i < faces.size(); i++)
    {
        std::vector<int> face = faces[i];
        for (int j = 0; j < 3; j++)
        {
            Vector3 v0 = vertexs[face[j]];
            Vector3 v1 = vertexs[face[(j + 1) % 3]];
            int x0 = (v0.x + 100) * width / 200.;
            int y0 = v0.y * height / 200.;
            int x1 = (v1.x + 100) * width / 200.;
            int y1 = v1.y * height / 200.;
            brush->DrawLine({x0, y0}, {x1, y1}, image, white);
        }
    }
    image.write_tga_file("output.tga");
}