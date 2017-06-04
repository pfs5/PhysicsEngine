//
// Created by patrik on 03.06.17..
//

#ifndef PHYSICSENGINE_RIGIDBODY_H
#define PHYSICSENGINE_RIGIDBODY_H

#include "Component.h"
#include "../Vectors/Vector2f.h"
#include "../Physics/Material.h"

namespace GameObjects {
    class Rigidbody : public Component {
    public:
        Rigidbody(GameObject *game_object);

        LinAlg::Vector2f velocity;
        LinAlg::Vector2f acceleration;

        void setMaterial(Physics::Material *material);
        std::type_index getType() override;
        float getMass();
        void setGravity (bool gravity);
        bool hasGravity ();

    private:
        bool m_gravity;
        Physics::Material *m_material;
    };
}

#endif //PHYSICSENGINE_RIGIDBODY_H
