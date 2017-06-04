//
// Created by patrik on 03.06.17..
//

#include <iostream>
#include <typeinfo>
#include "GameObject.h"
#include "../Main/Display.h"
#include "Rigidbody.h"
#include "../Physics/Physics.h"

void GameObjects::GameObject::update(float dt) {
    // Rigid body physics
    Rigidbody *rb = getComponent<Rigidbody>();
    if (rb) {
        // Basic movement
        LinAlg::Vector2f a = rb->acceleration + LinAlg::Vector2f(0.f, Physics::GRAVITY);
        rb->velocity += a * dt;

        position += rb->velocity * dt;
        m_shape->getTransformable()->setPosition(position.x, position.y);
    }
}

void GameObjects::GameObject::draw() {
    Display::draw(*m_shape->getDrawable());
}

void GameObjects::GameObject::setShape(Physics::Shape *shape) {
    m_shape = shape;
}

Physics::Shape *GameObjects::GameObject::getShape() {
    return m_shape;
}

void GameObjects::GameObject::addComponent(Component * component) {
    m_components.insert(std::make_pair(component->getType(), component));
}
