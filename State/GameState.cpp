//
// Created by patrik on 03.06.17..
//

#include "GameState.h"

State::GameState::GameState(Application &application) : m_p_application(&application){}

void State::GameState::set_name(std::string name){
    m_state_name = name;
}
