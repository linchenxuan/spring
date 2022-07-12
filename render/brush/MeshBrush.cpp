#include "MeshBrush.h"

void MeshBrush::DrawTriangle(const Triangle3i &triangle, TGAColor color)
{
    this->DrawLine(triangle[0], triangle[1], color);
    this->DrawLine(triangle[1], triangle[2], color);
    this->DrawLine(triangle[2], triangle[0], color);
}

void MeshBrush::DrawOBJModel(std::shared_ptr<IModel> model, TGAColor color)
{
    auto faces = model->GetFaces();
    auto vertexs = model->GetVertexs();

    for (int i = 0; i < faces.size(); i++)
    {
        Triangle3i triangle;
        std::vector<int> face = faces[i];
        for (int j = 0; j < 3; j++)
        {
            Vector3f v0 = vertexs[face[j]];
            triangle[j] = Vector3i((v0.x + 100) * image->width() / 200, v0.y * image->height() / 200, v0.z);
        }
        DrawTriangle(triangle, color);
    }
}
