#include "PaddingBrush.h"
#include "Math.h"
void PaddingBrush::DrawTriangle(Triangle2i triangle, TGAImage &image, TGAColor color)
{
    Point2i bboxmin(image.width() - 1, image.height() - 1);
    Point2i bboxmax(0, 0);
    Point2i clamp(image.width() - 1, image.height() - 1);
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
            image.set(x, y, color);
        }
    }
}
