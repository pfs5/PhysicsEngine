#include <iostream>
#include "Application.h"
#include "../Vectors/Vector2f.h"

Collisions::AABB *f () {
    LinAlg::Vector2f min(1.f, 2.f);
    LinAlg::Vector2f max(3.f, 4.f);
    return new Collisions::AABB(min, max);
}

int main() {
    std::cout << "Starting game ..." << std::endl;

    sf::RectangleShape r;
    r.setSize(sf::Vector2f(1.f, 1.f));
    r.setPosition(sf::Vector2f(5.f, 5.f));
    r.setRotation(45.f);
    sf::Transform t = r.getTransform();

    int infinity = std::numeric_limits<int>::min();
    std::cout << infinity << std::endl;
    Application app;

    app.runMainLoop();

    return 0;
}