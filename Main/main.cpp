#include <iostream>
#include "Application.h"

int main() {
    std::cout << "Starting game ..." << std::endl;

    Application app;

    app.runMainLoop();

    return 0;
}