//
// Created by patrik on 04.06.17..
//

#ifndef PHYSICSENGINE_SHAPE_H
#define PHYSICSENGINE_SHAPE_H

#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics.hpp>
#include "../Collisions/AABB.h"
#include "../Collisions/Collider.h"

namespace Physics {
    class Shape {
    public:
        virtual sf::Drawable *getDrawable() = 0;
        virtual sf::Transformable *getTransformable() = 0;

        virtual float getVolume() = 0;
        virtual Collisions::AABB *getAABB() = 0;
        virtual Collisions::Collider *getCollider() = 0;

    protected:
        Collisions::AABB *m_aabb;
    };
}


#endif //PHYSICSENGINE_SHAPE_H
