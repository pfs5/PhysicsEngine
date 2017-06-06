//
// Created by patrik on 04.06.17..
//

#ifndef PHYSICSENGINE_MATERIAL_H
#define PHYSICSENGINE_MATERIAL_H

namespace Physics {
    enum MaterialType {
        Default,
        Rock,
        Wood,
        Metal,
        BouncyBall,
        SuperBall,
        Pillow,
        Static,
        Custom
    };

    class Material {
    public:
        Material () : Material(MaterialType::Default){};

        Material (MaterialType type);

        float density;
        float restitution;
    };
}


#endif //PHYSICSENGINE_MATERIAL_H
