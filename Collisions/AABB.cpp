//
// Created by patrik on 05.06.17.
//

#include "AABB.h"

Collisions::AABB::AABB(LinAlg::Vector2f min, LinAlg::Vector2f max) : min(min), max(max){}

bool Collisions::AABB::testAABBOverlap(Collisions::AABB *a, Collisions::AABB *b) {
    float d1x = b->min.x - a->max.x;
    float d1y = b->min.y - a->max.y;
    float d2x = a->min.x - b->max.x;
    float d2y = a->min.y - b->max.y;

    if (d1x >= 0.0f || d1y >= 0.0f)
        return false;

    if (d2x >= 0.0f || d2y >= 0.0f)
        return false;

    return true;
}

Collisions::AABB::AABB() {
    LinAlg::Vector2f zero;
    min = zero;
    max = zero;
}

void Collisions::AABB::setBounds(LinAlg::Vector2f min, LinAlg::Vector2f max) {
    this->min = min;
    this->max = max;
}
