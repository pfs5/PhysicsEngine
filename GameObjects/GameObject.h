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
#include "../Collisions/Collider.h"

class Component;

namespace GameObjects {
    class GameObject {
    public:
        GameObject() {
            m_shape = nullptr;
        };
        std::string name;

        //LinAlg::Vector2f rotation;
        //LinAlg::Vector2f scale;

        bool drawAABB;

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

        Collisions::AABB *getAABB();
        Collisions::Collider *getCollider();

        LinAlg::Vector2f getPosition();
        void setPosition(LinAlg::Vector2f position);
        void translate(LinAlg::Vector2f amount);

    private:
        LinAlg::Vector2f m_position;
        std::unordered_map<std::type_index, Component*> m_components;
        Physics::Shape *m_shape;
    };
}


#endif //PHYSICSENGINE_GAMEOBJECT_H
