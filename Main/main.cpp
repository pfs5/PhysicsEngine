#include <iostream>
#include "Application.h"
#include "../Vectors/Vector2f.h"

int main() {
    std::cout << "Starting game ..." << std::endl;

    LinAlg::Vector2f v1 (1, 2);
    LinAlg::Vector2f v2 (3, 4);
    LinAlg::Vector2f v3 = 10 * v1;
    v3 += v1;

    std::cout << v1 << std::endl;
    std::cout << v2 << std::endl;
    std::cout << v3 << std::endl;

    Application app;

    app.runMainLoop();

    return 0;
}