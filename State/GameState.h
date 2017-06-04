//
// Created by patrik on 03.06.17..
//

#ifndef PHYSICSENGINE_GAMESTATE_H
#define PHYSICSENGINE_GAMESTATE_H

#include "../Main/Application.h"
#include "../GameObjects/GameObject.h"
#include <SFML/Graphics.hpp>
#include <vector>

class Application;
namespace GameObjects {
    class GameObject;
}

namespace State {
    class GameState {
    public:
        GameState (Application &application);

        virtual void input() = 0;
        virtual void update(float dt) = 0;
        virtual void draw() = 0;

        void set_name(std::string name);
    protected:
        Application* m_p_application;
        std::string m_state_name;
        std::vector<GameObjects::GameObject*> m_game_objects;
    };
}


#endif //PHYSICSENGINE_GAMESTATE_H
