#include "MeshBrush.h"

void MeshBrush::DrawLine(const Point& a,const Point& b, TGAImage &image, TGAColor color){
    const int xDiff = b.x - a.x;
    const int yDiff = b.y - a.y;
    for (float i = 0; i<1; i+=0.1) { 
        int x = a.x + xDiff * i; 
        int y = a.y + yDiff * i; 
        image.set(x, y, color); 
    } 
}