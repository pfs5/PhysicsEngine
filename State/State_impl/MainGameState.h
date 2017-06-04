//
// Created by patrik on 03.06.17..
//

#ifndef PHYSICSENGINE_MAINGAMESTATE_H
#define PHYSICSENGINE_MAINGAMESTATE_H

#include "../PlayingState.h"

namespace State {
    class MainGameState : public PlayingState{
    public:
        MainGameState(Application &application);

    private:
        void initShape();

    };
}


#endif //PHYSICSENGINE_MAINGAMESTATE_H
