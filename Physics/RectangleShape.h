//
// Created by patrik on 04.06.17..
//

#ifndef PHYSICSENGINE_RECTANGLESHAPE_H
#define PHYSICSENGINE_RECTANGLESHAPE_H

#include "Shape.h"
#include <SFML/Graphics.hpp>

namespace Physics {
    class RectangleShape : public Shape{
    public:
        RectangleShape (sf::RectangleShape *rect);

        sf::Drawable *getDrawable() override;

        sf::Transformable *getTransformable() override;

        float getVolume() override;

    private:
        sf::RectangleShape *m_rectangle;
    };
}


#endif //PHYSICSENGINE_RECTANGLESHAPE_H
