//
// Created by patrik on 04.06.17..
//

#include "Vector2f.h"

namespace LinAlg {
    sf::Vector2f Vector2f::asSfVector2f() {
        return sf::Vector2f(x, y);
    }

    std::ostream &operator<<(std::ostream &strm, const Vector2f &v) {
        return strm << "x : " << v.x << " y: " << v.y;
    }

    Vector2f operator+(const Vector2f &v1, const Vector2f &v2) {
        return Vector2f(v1.x + v2.x, v1.y + v2.y);
    }

    Vector2f operator-(const Vector2f &v1, const Vector2f &v2) {
        return Vector2f(v1.x - v2.x, v1.y - v2.y);
    }

    Vector2f operator*(const Vector2f &v, float k) {
        return Vector2f(v.x * k, v.y * k);
    }

    Vector2f operator*(float k, const Vector2f &v) {
        return Vector2f(v.x * k, v.y * k);
    }

    Vector2f operator/(float k, const Vector2f &v) {
        return Vector2f(v.x / k, v.y / k);
    }

    Vector2f operator/(const Vector2f &v, float k) {
        return Vector2f(v.x / k, v.y / k);
    }

    float Vector2f::dotProduct(Vector2f a, Vector2f b) {
        float res = a.x*b.x + a.y*b.y;
        return res;
    }

    float Vector2f::squareMagnitude() {
        return x*x + y*y;
    }

}