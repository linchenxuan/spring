#include "MeshBrush.h"

void MeshBrush::DrawLine(Point a,Point b, TGAImage &image, TGAColor color){
    bool steep = false;
    if (std::abs(a.x-b.x) < std::abs(a.y-b.y)) {
        std::swap(a.x, a.y); 
        std::swap(b.x, b.y); 
        steep = true; 
    } 

    if(a.x > b.x){
        Point tmp = a;
        a = b;
        b = a;
    }

    float k =  float(b.y - a.y) / (b.x - a.x);
    for (int x = a.x; x<=b.x; x++) { 
        int y = a.y  + (x - a.x) * k; 
        if(steep){
            image.set(y, x, color); 
        }else{
            image.set(x, y, color); 
        }
    }  
}