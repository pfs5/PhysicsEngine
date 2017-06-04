//
// Created by patrik on 04.06.17..
//

#ifndef PHYSICSENGINE_VECTOR2F_H
#define PHYSICSENGINE_VECTOR2F_H

#include <SFML/Window.hpp>

namespace LinAlg {
    class Vector2f {
    public:
        float x;
        float y;

        Vector2f () {
            this->x = 0.f;
            this->y = 0.f;
        }

        Vector2f (float x, float y) {
            this->x = x;
            this->y = y;
        }
        Vector2f (int x, int y) {
            this->x = (float) x;
            this->y = (float) y;
        }

        sf::Vector2f asSfVector2f();

        // Operators
        Vector2f& operator+=(const Vector2f &v) {
            this->x += v.x;
            this->y += v.y;

            return *this;
        }

        Vector2f& operator-=(const Vector2f &v) {
            this->x -= v.x;
            this->y -= v.y;

            return *this;
        }

        friend std::ostream& operator<<(std::ostream &strm, const Vector2f &v);
        friend Vector2f operator+(const Vector2f &v1, const Vector2f &v2);
        friend Vector2f operator-(const Vector2f &v1, const Vector2f &v2);
        friend Vector2f operator*(const Vector2f &v, float k);
        friend Vector2f operator*(float k, const Vector2f &v);
        friend Vector2f operator/(const Vector2f &v, float k);
        friend Vector2f operator/(float k, const Vector2f &v);
    };

}


#endif //PHYSICSENGINE_VECTOR2F_H
