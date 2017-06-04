//
// Created by patrik on 03.06.17..
//

#include <iostream>
#include "Rigidbody.h"

GameObjects::Rigidbody::Rigidbody(GameObjects::GameObject *game_object) : Component(game_object) {
    m_material = new Physics::Material();
}

std::type_index GameObjects::Rigidbody::getType() {
    return typeid(Rigidbody);
}

void GameObjects::Rigidbody::setMaterial(Physics::Material *material) {
    m_material = material;
}

void GameObjects::Rigidbody::setGravity(bool gravity) {
    m_gravity = gravity;
}

bool GameObjects::Rigidbody::hasGravity() {
    return m_gravity;
}

float GameObjects::Rigidbody::getMass() {
    return m_material->density * m_game_object->getShape()->getVolume();
}
