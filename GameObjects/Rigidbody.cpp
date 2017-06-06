//
// Created by patrik on 03.06.17..
//

#include <iostream>
#include "Rigidbody.h"
#include "../Physics/Physics.h"


GameObjects::Rigidbody::Rigidbody(GameObjects::GameObject *game_object) : Component(game_object) {
    m_material = new Physics::Material();
    calculateMass();
}

std::type_index GameObjects::Rigidbody::getType() {
    return typeid(Rigidbody);
}

void GameObjects::Rigidbody::setMaterial(Physics::Material *material) {
    m_material = material;
    calculateMass();
}

void GameObjects::Rigidbody::setGravity(bool gravity) {
    m_gravity = gravity;
}

bool GameObjects::Rigidbody::hasGravity() {
    return m_gravity;
}

float GameObjects::Rigidbody::getMass() {
    return m_mass;
}

float GameObjects::Rigidbody::getInverseMass() {
    return m_inv_mass;
}

void GameObjects::Rigidbody::calculateMass() {
    m_mass = m_game_object->getShape()->getVolume() * m_material->density;
    m_inv_mass = 1.f / m_mass;
}

Physics::Material *GameObjects::Rigidbody::getMaterial() {
    return m_material;
}
