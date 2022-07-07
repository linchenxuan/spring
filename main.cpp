#include "render/brush/MeshBrush.h"
#include <memory>

int main(){
    TGAImage image(300, 300, TGAImage::RGB);
    std::unique_ptr<IBrush> brush= std::make_unique<MeshBrush>();
    Point a(30,30);
    Point b(50,300);
    brush->DrawLine(a,b,image,TGAColor(255, 0,   0,   255));
    image.write_tga_file("output.tga");
}