#pragma once

template <typename T>
class Vector2
{
public:
    T x;
    T y;

public:
    Vector2(T a, T b) : x(a), y(b){};
    ~Vector2(){};
};

using Point2i = Vector2<int>;
