//
// Created by patrik on 05.06.17.
//

#ifndef PHYSICSENGINE_CIRCLESHAPE_H
#define PHYSICSENGINE_CIRCLESHAPE_H

#include "Shape.h"

namespace Physics {
    class CircleShape : public Shape {
    public:
        CircleShape (sf::CircleShape *circle);
        sf::Drawable *getDrawable() override;

        sf::Transformable *getTransformable() override;

        float getVolume() override;

        Collisions::AABB *getAABB() override;

        Collisions::Collider *getCollider() override;

    private:
        sf::CircleShape *m_circle;
    };
}


#endif //PHYSICSENGINE_CIRCLESHAPE_H
