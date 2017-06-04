//
// Created by patrik on 03.06.17..
//

#ifndef PHYSICSENGINE_APPLICATION_H
#define PHYSICSENGINE_APPLICATION_H


#include <memory>
#include <stack>
#include "../State/GameState.h"

namespace State {
    class GameState;
}

class Application {
public:
    Application();
    void runMainLoop();

    void pushState(std::unique_ptr<State::GameState> state);
    void popState ();

private:
    std::stack<std::unique_ptr<State::GameState>> m_states;
};


#endif //PHYSICSENGINE_APPLICATION_H
