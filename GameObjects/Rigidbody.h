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
        Physics::Material *getMaterial();

        std::type_index getType() override;
        float getMass();
        float getInverseMass();
        void setGravity (bool gravity);
        bool hasGravity ();

    private:
        void calculateMass();

        bool m_gravity;
        Physics::Material *m_material;

        float m_mass;
        float m_inv_mass;
    };
}

#endif //PHYSICSENGINE_RIGIDBODY_H
