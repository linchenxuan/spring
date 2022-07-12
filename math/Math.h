#include "Vector2.hpp"
#include "Vector3.hpp"
class Math
{
public:
    template <typename T>
    static Vector3f Barycentric(const Triangle3<T> &triangle, const Point2<T> &&p)
    {
        Vector3f vec = CrossProduct(Vector3f(triangle[2].x - triangle[0].x, triangle[1].x - triangle[0].x, triangle[0].x - p.x),
                                    Vector3f(triangle[2].y - triangle[0].y, triangle[1].y - triangle[0].y, triangle[0].y - p.y));
        if (std::abs(vec.z) < 1)
            return Vector3f(-1, 1, 1);
        return Vector3f(1.f - (vec.x + vec.y) / vec.z, vec.x / vec.z, vec.y / vec.z);
    }

    template <typename T>
    static Vector3<T> CrossProduct(const Vector3<T> &vec1, const Vector3<T> &vec2)
    {
        return Vector3<T>(vec1.y * vec2.z - vec1.z * vec2.y, vec1.z * vec2.x - vec1.x * vec2.z, vec1.x * vec2.y - vec1.y * vec2.x);
    }
};
