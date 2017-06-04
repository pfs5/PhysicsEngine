//
// Created by patrik on 03.06.17..
//

#ifndef PHYSICSENGINE_DISPLAY_H
#define PHYSICSENGINE_DISPLAY_H

#include <SFML/Graphics.hpp>
namespace State {
    class GameState;
}

namespace Display {
    void init();

    void clear(const sf::Color& colour = {0, 0, 0});
    void display();
    void draw(const sf::Drawable& drawable);

    void checkWindowEvents();

    bool isOpen();

    constexpr uint16_t HEIGHT = 720;
    constexpr uint16_t WIDTH = 1208;
    const std::string TITLE = "Window";

    constexpr float UPS = 60;
}

#endif //PHYSICSENGINE_DISPLAY_H
