#include "PaddingBrush.h"
#include "Math.h"
#include <iostream>
void PaddingBrush::DrawTriangle(const Triangle3i &triangle, TGAColor color)
{
    Point2i bboxmin(image->width() - 1, image->height() - 1);
    Point2i bboxmax(0, 0);
    Point2i clamp(image->width() - 1, image->height() - 1);
    for (int i = 0; i < 3; i++)
    {
        bboxmin.x = std::max(0, std::min(bboxmin.x, triangle[i].x));
        bboxmin.y = std::max(0, std::min(bboxmin.y, triangle[i].y));

        bboxmax.x = std::min(clamp.x, std::max(bboxmax.x, triangle[i].x));
        bboxmax.y = std::min(clamp.y, std::max(bboxmax.y, triangle[i].y));
    }
    for (int x = bboxmin.x; x <= bboxmax.x; x++)
    {
        for (int y = bboxmin.y; y <= bboxmax.y; y++)
        {
            auto bc_screen = Math::Barycentric<int>(triangle, {x, y});
            if (bc_screen.x < 0 || bc_screen.y < 0 || bc_screen.z < 0)
                continue;
            int z = 0;
            for (int i = 0; i < 3; i++)
            {
                z += triangle[i].z * bc_screen[i];
            }
            if (zBuffer[int(x + y * image->width())] < z)
            {
                zBuffer[int(x + y * image->width())] = z;
                image->set(x, y, color);
            }
        }
    }
}

void PaddingBrush::DrawOBJModel(std::shared_ptr<IModel> model, TGAColor color)
{
    auto faces = model->GetFaces();
    auto vertexs = model->GetVertexs();

    for (int i = 0; i < faces.size(); i++)
    {
        std::vector<int> face = faces[i];
        Triangle3i triangle;
        Vector3f worldCoords[3];
        for (int j = 0; j < 3; j++)
        {
            Vector3f v0 = vertexs[face[j]];
            triangle[j] = Vector3i((v0.x + 100) * image->width() / 200, v0.y * image->height() / 200, v0.z);
            worldCoords[j] = v0;
        };
        Vector3f n = Math::CrossProduct(worldCoords[2] - worldCoords[0], worldCoords[1] - worldCoords[0]);
        n.Normalize();
        Vector3f lightDir(0, 0, -1);
        double intensity = n * lightDir;
        if (intensity > 0)
        {
            DrawTriangle(triangle, TGAColor(intensity * 255, intensity * 255, intensity * 255, 255));
        }
    }
}
