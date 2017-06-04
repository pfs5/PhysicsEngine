//
// Created by patrik on 03.06.17..
//

#include <iostream>
#include <typeinfo>
#include "GameObject.h"
#include "../Main/Display.h"

void GameObjects::GameObject::draw() {
    Display::draw(*m_shape);
}

void GameObjects::GameObject::setShape(sf::Drawable *shape) {
    m_shape = shape;
}

template<typename T>
T *GameObjects::GameObject::getComponent() {
    return (T *) m_components.at(typeid(T));
}

void GameObjects::GameObject::addComponent(Component * component) {
    //m_components.insert(std::make_pair(component->getType(), component));
}
