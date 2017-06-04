//
// Created by patrik on 03.06.17..
//

#ifndef PHYSICSENGINE_RIGIDBODY_H
#define PHYSICSENGINE_RIGIDBODY_H

#include "Component.h"

namespace GameObjects {
    class Rigidbody : public Component {
    public:
        Rigidbody(GameObject *game_object);

        std::type_index getType() override;

    };
}

#endif //PHYSICSENGINE_RIGIDBODY_H
