//
// Created by patrik on 05.06.17.
//

#ifndef PHYSICSENGINE_COLLIDER_H
#define PHYSICSENGINE_COLLIDER_H

#include "../Vectors/Vector2f.h"

namespace Collisions {
    class Collider {
    public:
        Collider() {

        };

        Collider(int pointNumber) {
            for (int i=0; i<pointNumber; i++) {
                points.push_back(LinAlg::Vector2f());
            }
        };

        std::vector<LinAlg::Vector2f> points;
    };
}


#endif //PHYSICSENGINE_COLLIDER_H
