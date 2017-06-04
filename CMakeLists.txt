cmake_minimum_required(VERSION 3.7)
project(PhysicsEngine)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES Main/main.cpp Main/Application.cpp Main/Application.h Main/Display.h Main/Display.cpp State/GameState.cpp State/GameState.h State/PlayingState.cpp State/PlayingState.h GameObjects/GameObject.cpp GameObjects/GameObject.h GameObjects/Component.cpp GameObjects/Component.h State/State_impl/MainGameState.cpp State/State_impl/MainGameState.h GameObjects/Rigidbody.cpp GameObjects/Rigidbody.h)
add_executable(PhysicsEngine ${SOURCE_FILES})

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML REQUIRED system window graphics network audio)
if (SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(PhysicsEngine ${SFML_LIBRARIES})
endif()