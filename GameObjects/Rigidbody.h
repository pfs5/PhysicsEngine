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

        void setMaterial(Physics::Material *material);

        Physics::Material *getMaterial();
        std::type_index getType() override;

        void setVelocity(LinAlg::Vector2f v);
        LinAlg::Vector2f getVelocity();
        void setAcceleration(LinAlg::Vector2f a);
        LinAlg::Vector2f getAcceleration();

        float getMass();
        float getInverseMass();
        void setGravity (bool gravity);
        bool hasGravity ();
        void setStatic (bool stat);

        bool isStatic();
    private:
        LinAlg::Vector2f m_velocity;
        LinAlg::Vector2f m_acceleration;

        void calculateMass();

        bool m_gravity;
        bool m_static;

        Physics::Material *m_material;

        float m_mass;
        float m_inv_mass;
    };
}

#endif //PHYSICSENGINE_RIGIDBODY_H
