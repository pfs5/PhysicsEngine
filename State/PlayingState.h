//
// Created by patrik on 03.06.17..
//

#ifndef PHYSICSENGINE_PLAYINGSTATE_H
#define PHYSICSENGINE_PLAYINGSTATE_H

#include "GameState.h"

namespace State {
    class PlayingState : public GameState{
    public:
        PlayingState(Application &application);

        void input() override;

        void update(float dt) override;

        void draw() override;

    };
}


#endif //PHYSICSENGINE_PLAYINGSTATE_H
