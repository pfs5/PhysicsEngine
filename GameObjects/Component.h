//
// Created by patrik on 03.06.17..
//

#ifndef PHYSICSENGINE_COMPONENT_H
#define PHYSICSENGINE_COMPONENT_H

#include "GameObject.h"

class GameObject;

namespace GameObjects {
    class Component {
    public:
        Component(GameObject *game_object);

        virtual std::type_index getType ();

    protected:
        GameObject *m_game_object;
    };
}


#endif //PHYSICSENGINE_COMPONENT_H
