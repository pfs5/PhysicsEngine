//
// Created by patrik on 03.06.17..
//

#include <iostream>
#include "MainGameState.h"
#include "../../GameObjects/Component.h"
#include "../../GameObjects/Rigidbody.h"
#include "../../Physics/RectangleShape.h"

State::MainGameState::MainGameState(Application &application) : PlayingState(application) {
    // Init name
    m_state_name = "Main game state";

    std::cout << "Opening state " << m_state_name << std::endl;

    initShape(100.f, 100.f, sf::Color::White);
    initShape(300.f, 80.f, sf::Color::Blue);
    initShape(500.f, 120.f, sf::Color::Green);
}

void State::MainGameState::initShape(float x, float y, sf::Color color) {
    // Create square 1
    GameObjects::GameObject *square1 = new GameObjects::GameObject;
    square1->position = LinAlg::Vector2f(x, y);

    sf::RectangleShape *rectShape = new sf::RectangleShape();
    rectShape->setSize(sf::Vector2f(50, 50));
    rectShape->setFillColor(sf::Color::Black);
    rectShape->setOutlineColor(color);
    rectShape->setOutlineThickness(3);

    Physics::RectangleShape *shape = new Physics::RectangleShape(rectShape);
    square1->setShape(shape);

    GameObjects::Rigidbody *rigidbody = new GameObjects::Rigidbody(square1);
    rigidbody->velocity = LinAlg::Vector2f(0, 0);
    square1->addComponent(rigidbody);


    m_game_objects.push_back(square1);
}
