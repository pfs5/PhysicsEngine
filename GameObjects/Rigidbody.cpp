//
// Created by patrik on 03.06.17..
//

#include <iostream>
#include "Rigidbody.h"

GameObjects::Rigidbody::Rigidbody(GameObjects::GameObject *game_object) : Component(game_object) {}

std::type_index GameObjects::Rigidbody::getType() {
    return typeid(Rigidbody);
}
