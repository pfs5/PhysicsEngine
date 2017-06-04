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
#include <SFML/Graphics/Transformable.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include "Component.h"
#include "../Vectors/Vector2f.h"
#include "../Physics/Shape.h"

class Component;

namespace GameObjects {
    class GameObject {
    public:
        LinAlg::Vector2f position;
        LinAlg::Vector2f rotation;
        LinAlg::Vector2f scale;

        void update(float dt);
        void draw();
        void setShape(Physics::Shape *shape);
        Physics::Shape *getShape();

        template<typename T>
        T *getComponent() {
            std::unordered_map<std::type_index, Component *>::const_iterator item = m_components.find(typeid(T));
            if (item == m_components.end()) {
                return nullptr;
            }

            return (T *) m_components.at(typeid(T));
        };

        void addComponent(Component * component);

    private:
        std::unordered_map<std::type_index, Component*> m_components;
        Physics::Shape *m_shape;
    };
}


#endif //PHYSICSENGINE_GAMEOBJECT_H
