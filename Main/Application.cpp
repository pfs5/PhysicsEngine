//
// Created by patrik on 03.06.17..
//

#include <iostream>
#include "Application.h"
#include "Display.h"
#include "../State/PlayingState.h"
#include "../State/State_impl/MainGameState.h"

Application::Application() {
    Display::init();

    pushState(std::make_unique<State::MainGameState>(*this));
    std::cout << "end." << std::endl;
}

void Application::runMainLoop() {
    while(Display::isOpen()) {
        Display::checkWindowEvents();
        Display::clear();

        m_states.top()->input();
        m_states.top()->update(0.0f);
        m_states.top()->draw();

        Display::display();
    }
}

void Application::pushState(std::unique_ptr<State::GameState> state) {
    m_states.push(std::move(state));
}

void Application::popState() {
    m_states.pop();
}
