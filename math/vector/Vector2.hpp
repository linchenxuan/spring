#pragma once

#include <Vector3.hpp>

template <typename T>
class Vector2
{
public:
    T x;
    T y;

public:
    Vector2() = default;
    Vector2(const Vector3<T> &vec) : x(vec.x), y(vec.y){};
    Vector2(T a, T b) : x(a), y(b){};
    ~Vector2(){};
};

template <typename T>
using Point2 = Vector2<T>;
template <typename T>
using Triangle2 = Vector2<T>[3];

using Point2i = Vector2<int>;
using Triangle2i = Vector2<int>[3];