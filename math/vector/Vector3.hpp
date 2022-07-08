#pragma once

template <typename T>
class Vector3
{
public:
    T x;
    T y;
    T z;

public:
    Vector3() = default;
    Vector3(T a, T b, T c) : x(a), y(b), z(c){};
    ~Vector3(){};
};

using Point3f = Vector3<float>;
using Vector3f = Vector3<float>;