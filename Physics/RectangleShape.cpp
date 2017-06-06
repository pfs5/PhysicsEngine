//
// Created by patrik on 04.06.17..
//

#include <iostream>
#include "RectangleShape.h"

Physics::RectangleShape::RectangleShape(sf::RectangleShape *rect) : m_rectangle(rect) {
    m_aabb = new Collisions::AABB();
    m_collider = new Collisions::Collider(4);
}

sf::Drawable *Physics::RectangleShape::getDrawable() {
    return m_rectangle;
}

sf::Transformable *Physics::RectangleShape::getTransformable() {
    return m_rectangle;
}

float Physics::RectangleShape::getVolume() {
    sf::Vector2f size = m_rectangle->getSize();
    return size.x * size.y;
}

Collisions::AABB *Physics::RectangleShape::getAABB() {

    sf::Rect<float> bound = m_rectangle->getGlobalBounds();
    LinAlg::Vector2f top(bound.left, bound.top);
    LinAlg::Vector2f size(bound.width, bound.height);

    LinAlg::Vector2f min(top);
    LinAlg::Vector2f max(top + size);

    m_aabb->setBounds(min, max);
    return m_aabb;
}

Collisions::Collider *Physics::RectangleShape::getCollider() {
    // Update collider
    sf::Transform t = m_rectangle->getTransform();
    for (size_t i=0; i<m_rectangle->getPointCount(); i++) {
        sf::Vector2f p = t.transformPoint(m_rectangle->getPoint(i));
        m_collider->points[i] = p;
    }

    return m_collider;
}
