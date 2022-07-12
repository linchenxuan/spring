#pragma once

#include <cmath>

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
    Vector3<T> operator-(const Vector3<T> &vec);
    double operator*(const Vector3<T> &vec);
    void Normalize();
    Vector3<T> Normalize() const;
    ~Vector3(){};
};

template <typename T>
Vector3<T> Vector3<T>::operator-(const Vector3<T> &vec)
{
    Vector3<T> ret{this->x - vec.x, this->y - vec.y, this->z - vec.z};
    return ret;
}

template <typename T>
double Vector3<T>::operator*(const Vector3<T> &vec)
{
    return this->x * vec.x + this->y * vec.y + this->z * vec.z;
}

template <typename T>
void Vector3<T>::Normalize()
{
    double num = std::sqrt((*this) * (*this));
    this->x /= num;
    this->y /= num;
    this->z /= num;
}

template <typename T>
Vector3<T> Vector3<T>::Normalize() const
{
    double num = std::sqrt((*this) * (*this));
    return {this->x / num, this->y / num, this->z / num};
}

using Point3f = Vector3<float>;
using Vector3f = Vector3<float>;