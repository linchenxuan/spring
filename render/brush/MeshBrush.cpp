#include "MeshBrush.h"

void MeshBrush::DrawTriangle(Triangle2i triangle, TGAImage &image, TGAColor color)
{
    this->DrawLine(triangle[0], triangle[1], image, color);
    this->DrawLine(triangle[1], triangle[2], image, color);
    this->DrawLine(triangle[2], triangle[0], image, color);
}

void MeshBrush::DrawOBJModel(std::shared_ptr<IModel> model, TGAImage &image, TGAColor color)
{
    auto faces = model->GetFaces();
    auto vertexs = model->GetVertexs();

    for (int i = 0; i < faces.size(); i++)
    {
        Triangle2i triangle;
        std::vector<int> face = faces[i];
        for (int j = 0; j < 3; j++)
        {
            Vector3f v0 = vertexs[face[j]];
            triangle[j] = {static_cast<int>((v0.x + 100) * image.width() / 200), static_cast<int>(v0.y * image.height() / 200)};
        }
        DrawTriangle(triangle, image, color);
    }
}
