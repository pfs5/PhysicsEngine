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
        LinAlg::Vector2f a = rb->getAcceleration();
        if (rb->hasGravity()) {
            a += LinAlg::Vector2f(0.f, Physics::GRAVITY);
        }
        rb->setVelocity(rb->getVelocity() + a * dt);

        translate(rb->getVelocity() * dt);
    }
}

void GameObjects::GameObject::draw() {
    Display::draw(*m_shape->getDrawable());

    // Draw AABB
    if (drawAABB) {
        sf::RectangleShape aabb;
        aabb.setPosition(getAABB()->min.asSfVector2f());
        aabb.setSize((getAABB()->max - getAABB()->min).asSfVector2f());
        aabb.setFillColor(sf::Color::Transparent);
        aabb.setOutlineColor(sf::Color::Green);
        aabb.setOutlineThickness(2);
        Display::draw(aabb);
    }
}

void GameObjects::GameObject::setShape(Physics::Shape *shape) {
    m_shape = shape;
    m_shape->getTransformable()->setPosition(m_position.x, m_position.y);
}

Physics::Shape *GameObjects::GameObject::getShape() {
    return m_shape;
}

void GameObjects::GameObject::addComponent(Component * component) {
    m_components.insert(std::make_pair(component->getType(), component));
}

Collisions::AABB *GameObjects::GameObject::getAABB() {
    return m_shape->getAABB();
}

Collisions::Collider *GameObjects::GameObject::getCollider() {
    return m_shape->getCollider();
}

LinAlg::Vector2f GameObjects::GameObject::getPosition() {
    return m_position;
}

void GameObjects::GameObject::setPosition(LinAlg::Vector2f position) {
    m_position = position;
    if (m_shape != nullptr) {
        m_shape->getTransformable()->setPosition(position.x, position.y);
    }
}

void GameObjects::GameObject::translate(LinAlg::Vector2f amount) {
    GameObjects::Rigidbody *rb = getComponent<GameObjects::Rigidbody>();
    if (rb != nullptr) {
        if (rb->isStatic()) {
            return;
        }
    }
    setPosition(getPosition() + amount);
}
