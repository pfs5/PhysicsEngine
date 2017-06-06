//
// Created by patrik on 03.06.17..
//

#include <iostream>
#include <cmath>
#include "PlayingState.h"
#include "../GameObjects/Rigidbody.h"
#include "../Physics/Physics.h"

State::PlayingState::PlayingState(Application &application) : GameState(application) {}

GameObjects::GameObject *State::PlayingState::controlled_object = nullptr;

void State::PlayingState::input() {
    if (!PlayingState::controlled_object) {
        return;
    }

    float speed = 0.1f;
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
        PlayingState::controlled_object->translate(LinAlg::Vector2f(speed, 0.f));
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
        PlayingState::controlled_object->translate(LinAlg::Vector2f(speed, 0.f));
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
        PlayingState::controlled_object->translate(LinAlg::Vector2f(0.f, speed));
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
        PlayingState::controlled_object->translate(LinAlg::Vector2f(0.f, speed));
    }
}

void calculateInterval(Collisions::Collider *c, LinAlg::Vector2f axis_normal, float &min, float &max) {
    float d = LinAlg::Vector2f::dotProduct(c->points[0], axis_normal);
    min = max = d;
    for (int i=1; i<c->points.size(); i++) {
        float d = LinAlg::Vector2f::dotProduct(c->points[i], axis_normal);
        if (d < min) {
            min = d;
        } else if (d > max) {
            max = d;
        }

    }
}

bool narrowStage (GameObjects::GameObject *a, GameObjects::GameObject *b, LinAlg::Vector2f *normal, float &distance) {
    std::vector<Collisions::Collider*> colliders;
    colliders.push_back(a->getCollider());
    colliders.push_back(b->getCollider());

    distance = std::numeric_limits<int>::min();

    for (int c=0; c<2; c++) {
        for (int i = 0; i < colliders[c]->points.size() - 1; i++) {
            // Generate separating axis
            LinAlg::Vector2f axis = colliders[c]->points[i + 1] - colliders[c]->points[i];
            LinAlg::Vector2f axis_normal(axis.y, -axis.x);

            // Get distance
            float min_a, min_b;
            float max_a, max_b;
            calculateInterval(colliders[0], axis_normal, min_a, max_a);
            calculateInterval(colliders[1], axis_normal, min_b, max_b);

            float d1 = min_a - max_b;
            float d2 = min_b - max_a;

            float d = fmaxf(d1, d2);
            d /= axis.squareMagnitude();
            if (d > distance) {
                distance = d;
                normal->copy(axis_normal);
            }
        }
    }

    return (distance > Physics::COLLISION_DISTANCE_MIN && distance < Physics::COLLISION_DISTANCE_MAX) || distance < 0;
}

void resolveCollision(GameObjects::GameObject *a, GameObjects::GameObject *b, LinAlg::Vector2f normal, float distance) {
    GameObjects::Rigidbody *rb_a = a->getComponent<GameObjects::Rigidbody>();
    GameObjects::Rigidbody *rb_b = b->getComponent<GameObjects::Rigidbody>();

    if (!rb_a || !rb_b) {
        return;
    }

    // Relative velocity
    LinAlg::Vector2f relVelocity = rb_b->getVelocity() - rb_a->getVelocity();
    float velAlongNormal = LinAlg::Vector2f::dotProduct(relVelocity, normal);

    // Dont resolve if velocities are separating
    if (velAlongNormal > 0) {
        return;
    }

    // Restitution
    float e = fminf(rb_a->getMaterial()->restitution, rb_b->getMaterial()->restitution);

    // Impulse scalar
    float j = -(1 + e) * velAlongNormal;

    j /= rb_a->getInverseMass() + rb_b->getInverseMass();

    // Apply impulse
    LinAlg::Vector2f impulse = j * normal;

    // Move out of collision
    LinAlg::Vector2f push = normal * distance;
    std::cout << distance << std::endl;
    a->translate(-1 * normal * distance * 10);           // TODO
    b->translate(normal * distance * 10);           // TODO

    // Modify speed
    rb_a->setVelocity(rb_a->getVelocity() - 1.f / rb_a->getMass() * impulse);
    rb_b->setVelocity(rb_b->getVelocity() + 1.f / rb_b->getMass() * impulse);
}

void collisionDetection(std::vector<GameObjects::GameObject *> game_objects) {
    for (int i = 0; i < game_objects.size() - 1; i++) {
        for (int j = i + 1; j < game_objects.size(); j++) {
            bool collision = Collisions::AABB::testAABBOverlap(game_objects[i]->getAABB(), game_objects[j]->getAABB());
            if (collision) {
                LinAlg::Vector2f normal;
                float distance;

                bool isCollision = narrowStage(game_objects[i], game_objects[j], &normal, distance);
                if (isCollision) {
                    std::cout << "collision" << std::endl;
                    normal = normal / sqrtf(normal.squareMagnitude());      // Normalize
                    resolveCollision(game_objects[i], game_objects[j], normal.getDirection(), fabsf(distance));
                }
            }
        }
    }
}


void State::PlayingState::update(float dt) {
    // Update objects
    for (int i = 0; i < m_game_objects.size(); i++) {
        m_game_objects[i]->update(dt);
    }

    // Collision detection
    collisionDetection(m_game_objects);
}

void State::PlayingState::draw() {
    for (int i = 0; i < m_game_objects.size(); i++) {
        m_game_objects[i]->draw();
    }
}
