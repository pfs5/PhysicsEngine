//
// Created by patrik on 03.06.17..
//

#include <iostream>
#include <ctime>
#include "Application.h"
#include "Display.h"
#include "../State/PlayingState.h"
#include "../State/State_impl/MainGameState.h"

void calculateFPS(bool print_fps)
{
    static sf::Clock timer;
    static sf::Clock printTimer;
    static auto numFrames = 0;

    numFrames++;

    if (printTimer.getElapsedTime().asSeconds() >= 1.0f)
    {
        auto fps = (float)numFrames / timer.getElapsedTime().asSeconds();
        printTimer.restart();
        if (print_fps) {
            std::cout << "fps : " << fps << std::endl;
        }

        numFrames = 0;
        timer.restart();
    }
}

Application::Application() {
    Display::init();

    pushState(std::make_unique<State::MainGameState>(*this));
    std::cout << "end." << std::endl;
}

void Application::runMainLoop() {
    sf::Clock clock;
    sf::Time accumulator;
    sf::Time dt = sf::seconds(1.f / Display::UPS);
    sf::Time max_acc = sf::seconds(0.2f);

    std::cout << dt.asSeconds() << std::endl;

    while(Display::isOpen()) {
        Display::checkWindowEvents();
        Display::clear();

        m_states.top()->input();

        // Physics
        accumulator += clock.restart();

        // Clamp accumulator
        //if (accumulator > max_acc) {
        //    accumulator = max_acc;
        //}

        while (accumulator > dt) {
            m_states.top()->update(dt.asSeconds());
            accumulator -= dt;
        }

        // Rendering
        m_states.top()->draw();

        calculateFPS(true);
        Display::display();
    }
}

void Application::pushState(std::unique_ptr<State::GameState> state) {
    m_states.push(std::move(state));
}

void Application::popState() {
    m_states.pop();
}
