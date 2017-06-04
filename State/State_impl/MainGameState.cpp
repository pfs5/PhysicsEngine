//
// Created by patrik on 03.06.17..
//

#include <iostream>
#include "MainGameState.h"
#include "../../GameObjects/Component.h"
#include "../../GameObjects/Rigidbody.h"

State::MainGameState::MainGameState(Application &application) : PlayingState(application) {
    // Init name
    m_state_name = "Main game state";

    std::cout << "Opening state " << m_state_name << std::endl;

    initShape();
}

void State::MainGameState::initShape() {
    // Create square 1
    GameObjects::GameObject *square1 = new GameObjects::GameObject;

    sf::RectangleShape *rectShape = new sf::RectangleShape();
    rectShape->setSize(sf::Vector2f(50, 50));
    rectShape->setPosition(100, 100);
    rectShape->setFillColor(sf::Color::Black);
    rectShape->setOutlineColor(sf::Color::White);
    rectShape->setOutlineThickness(3);

    square1->setShape(rectShape);

    GameObjects::Component *rigidbody = new GameObjects::Rigidbody(square1);


    m_game_objects.push_back(square1);
}
