//
// Created by patrik on 04.06.17..
//

#include <iostream>
#include "Material.h"

Physics::Material::Material(MaterialType type) {
    switch (type) {
        case MaterialType::Default:
            density = 0.5f;
            restitution = 0.5f;
            break;
        case MaterialType::Rock:
            density = 0.6f;
            restitution = 0.1f;
            break;
        case MaterialType::Wood:
            density = 0.3f;
            restitution = 0.2f;
            break;
        case MaterialType::Metal:
            density = 1.2f;
            restitution = 0.05f;
            break;
        case MaterialType::BouncyBall:
            density = 0.3f;
            restitution = 0.8f;
            break;
        case MaterialType::SuperBall:
            density = 0.3f;
            restitution = 0.95f;
            break;
        case MaterialType::Pillow:
            density = 0.1f;
            restitution = 0.2f;
            break;
        case MaterialType::Static:
            density = 1.5;
            restitution = 0.95f;
            break;
        case MaterialType::Custom:
            density = 0.5f;
            restitution = 0.95f;
            break;
    }
}