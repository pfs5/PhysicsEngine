//
// Created by patrik on 03.06.17..
//

#include <iostream>
#include "MainGameState.h"
#include "../../GameObjects/Rigidbody.h"
#include "../../Physics/RectangleShape.h"
#include "../../Physics/CircleShape.h"


GameObjects::GameObject *initRectangle(std::string name, float x, float y, sf::Vector2f size, sf::Color color, bool useGravity = true, float rotation = 0.f) {
    // Create square
    GameObjects::GameObject *square1 = new GameObjects::GameObject;
    square1->position = LinAlg::Vector2f(x, y);
    square1->drawAABB = true;
    square1->name = name;

    sf::RectangleShape *rectShape = new sf::RectangleShape();
    rectShape->setSize(size);
    rectShape->setRotation(rotation);
    rectShape->setFillColor(sf::Color::Black);
    rectShape->setOutlineColor(color);
    rectShape->setOutlineThickness(3);

    Physics::RectangleShape *shape = new Physics::RectangleShape(rectShape);
    square1->setShape(shape);

    GameObjects::Rigidbody *rigidbody = new GameObjects::Rigidbody(square1);
    rigidbody->velocity = LinAlg::Vector2f(0, 0);
    rigidbody->setGravity(useGravity);
    square1->addComponent(rigidbody);

    return square1;
}

GameObjects::GameObject *initBall(std::string name, float x, float y, float r, sf::Color color, bool useGravity = true) {
    // Create circle
    GameObjects::GameObject *circle = new GameObjects::GameObject;
    circle->position = LinAlg::Vector2f(x, y);
    circle->drawAABB = true;
    circle->name = name;

    sf::CircleShape *circleShape = new sf::CircleShape();
    circleShape->setRadius(r);
    circleShape->setFillColor(sf::Color::Black);
    circleShape->setOutlineColor(color);
    circleShape->setOutlineThickness(3);

    Physics::CircleShape *shape = new Physics::CircleShape(circleShape);
    circle->setShape(shape);

    GameObjects::Rigidbody *rigidbody = new GameObjects::Rigidbody(circle);
    rigidbody->velocity = LinAlg::Vector2f(0, 0);
    rigidbody->setGravity(useGravity);
    circle->addComponent(rigidbody);

    return circle;
}

State::MainGameState::MainGameState(Application &application) : PlayingState(application) {
    // Init name
    m_state_name = "Main game state";

    std::cout << "Opening state " << m_state_name << std::endl;

    // Falling objects
    GameObjects::GameObject *obj1 = initRectangle("white", 150.f, 50.f,sf::Vector2f(100.f, 100.f), sf::Color::White, false, 30.f);
    GameObjects::GameObject *obj2 = initRectangle("white", 300.f, 50.f,sf::Vector2f(50.f, 50.f), sf::Color::White, true);
    GameObjects::GameObject *obj3 = initRectangle("white", 500.f, 50.f,sf::Vector2f(50.f, 50.f), sf::Color::White, true);
    GameObjects::GameObject *obj4 = initRectangle("white", 700.f, 50.f,sf::Vector2f(50.f, 50.f), sf::Color::White, true);
    GameObjects::GameObject *obj5 = initRectangle("white", 300.f, 150.f,sf::Vector2f(50.f, 50.f), sf::Color::White, true);
    GameObjects::GameObject *obj6 = initRectangle("white", 500.f, 150.f,sf::Vector2f(50.f, 50.f), sf::Color::White, true);
    GameObjects::GameObject *obj7 = initRectangle("white", 700.f, 150.f,sf::Vector2f(50.f, 50.f), sf::Color::White, true);


    m_game_objects.push_back(obj1);
    m_game_objects.push_back(obj2);
    m_game_objects.push_back(obj3);
    m_game_objects.push_back(obj4);
    //m_game_objects.push_back(obj5);
    //m_game_objects.push_back(obj6);
    //m_game_objects.push_back(obj7);

    State::PlayingState::controlled_object = obj2;

    //m_game_objects.push_back(initBall("ball", 500.f, 150.f, 30.f, sf::Color::Yellow));

    // Plane
    GameObjects::GameObject *plane = initRectangle("plane", 50.f, 500.f, sf::Vector2f(800.f, 50.f), sf::Color::Cyan, false);
    plane->getComponent<GameObjects::Rigidbody>()->setMaterial(new Physics::Material(Physics::MaterialType::Static));
    m_game_objects.push_back(plane);
}

