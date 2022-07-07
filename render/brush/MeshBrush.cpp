#include "MeshBrush.h"

void MeshBrush::DrawLine(const Point& a,const Point& b, TGAImage &image, TGAColor color){
    float k =  float(b.y - a.y) / (b.x - a.x);
    for (int x = a.x; x<=b.x; x++) { 
        int y = a.y  + (x - a.x) * k; 
        image.set(x, y, color); 
    }  
}