//
// Created by patrik on 03.06.17..
//

#include "Component.h"

GameObjects::Component::Component(GameObjects::GameObject *game_object) : m_game_object(game_object) {}

std::type_index GameObjects::Component::getType() {
    return typeid(this);
}