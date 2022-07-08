#include "MeshBrush.h"

void MeshBrush::DrawTriangle(Triangle2i triangle, TGAImage &image, TGAColor color)
{
    this->DrawLine(triangle[0], triangle[1], image, color);
    this->DrawLine(triangle[1], triangle[2], image, color);
    this->DrawLine(triangle[2], triangle[0], image, color);
}

void MeshBrush::DrawOBJModel(IModel *model, TGAImage &image, TGAColor color)
{
    auto faces = model->GetFaces();
    auto vertexs = model->GetVertexs();

    for (int i = 0; i < faces.size(); i++)
    {
        std::vector<int> face = faces[i];
        for (int j = 0; j < 3; j++)
        {
            Vector3 v0 = vertexs[face[j]];
            Vector3 v1 = vertexs[face[(j + 1) % 3]];
            int x0 = (v0.x + 100) * image.width() / 200.;
            int y0 = v0.y * image.height() / 200.;
            int x1 = (v1.x + 100) * image.width() / 200.;
            int y1 = v1.y * image.height() / 200.;
            this->DrawLine({x0, y0}, {x1, y1}, image, color);
        }
    }
}
