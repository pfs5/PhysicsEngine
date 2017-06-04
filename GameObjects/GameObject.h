//
// Created by patrik on 03.06.17..
//

#ifndef PHYSICSENGINE_GAMEOBJECT_H
#define PHYSICSENGINE_GAMEOBJECT_H

#include <SFML/Window.hpp>
#include <vector>
#include <SFML/Graphics/Drawable.hpp>
#include <unordered_map>
#include <typeindex>
#include "Component.h"

class Component;

namespace GameObjects {
    class GameObject {
    public:
        sf::Vector2f position;
        sf::Vector2f rotation;
        sf::Vector2f scale;

        void draw();
        void setShape(sf::Drawable *shape);

        template<typename T>
        T *getComponent();
        void addComponent(Component * component);

    private:
        std::unordered_map<std::type_index, Component*> m_components;
        sf::Drawable *m_shape;
    };
}


#endif //PHYSICSENGINE_GAMEOBJECT_H
