//
// Created by patrik on 05.06.17.
//

#include "CircleShape.h"

Physics::CircleShape::CircleShape(sf::CircleShape *circle) : m_circle(circle){
    m_aabb = new Collisions::AABB();
}

sf::Drawable *Physics::CircleShape::getDrawable() {
    return m_circle;
}

sf::Transformable *Physics::CircleShape::getTransformable() {
    return m_circle;
}

float Physics::CircleShape::getVolume() {
    return (float) (m_circle->getRadius() * m_circle->getRadius() * M_PI);
}

Collisions::AABB *Physics::CircleShape::getAABB() {
    sf::Vector2f center = m_circle->getPosition();
    float r = m_circle->getRadius();
    LinAlg::Vector2f min (center);
    LinAlg::Vector2f max (center + 2 * LinAlg::Vector2f(r, r));
    m_aabb->setBounds(min, max);

    return m_aabb;
}

Collisions::Collider *Physics::CircleShape::getCollider() {
    return nullptr;
}
