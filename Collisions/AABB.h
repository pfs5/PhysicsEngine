//
// Created by patrik on 05.06.17.
//

#ifndef PHYSICSENGINE_AABB_H
#define PHYSICSENGINE_AABB_H


#include "../Vectors/Vector2f.h"

namespace Collisions {
    class AABB {
    public:
        AABB ();
        AABB (LinAlg::Vector2f min, LinAlg::Vector2f max);
        LinAlg::Vector2f min;
        LinAlg::Vector2f max;

        void setBounds (LinAlg::Vector2f min, LinAlg::Vector2f max);

        static bool testAABBOverlap (AABB *a, AABB *b);

    };
}

#endif //PHYSICSENGINE_AABB_H
