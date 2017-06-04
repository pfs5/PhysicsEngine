//
// Created by patrik on 04.06.17..
//

#include "RectangleShape.h"

Physics::RectangleShape::RectangleShape(sf::RectangleShape *rect) : m_rectangle(rect) {}

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
