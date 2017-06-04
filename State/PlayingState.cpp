//
// Created by patrik on 03.06.17..
//

#include <iostream>
#include "PlayingState.h"
#include "../GameObjects/Rigidbody.h"

State::PlayingState::PlayingState(Application& application) : GameState(application) {}

void State::PlayingState::input() {

}

void State::PlayingState::update(float dt) {
    for (int i=0; i<m_game_objects.size(); i++) {
        m_game_objects[i]->update(dt);
    }
}

void State::PlayingState::draw() {
    for (int i=0; i<m_game_objects.size(); i++) {
        m_game_objects[i]->draw();
    }
}
