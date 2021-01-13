/*
** EPITECH PROJECT, 2020
** Movement.cpp
** File description:
** Movement
*/

#include <memory>
#include "System/Movement.hpp"
#include "Core/Coordinator.hpp"
#include <SFML/Graphics.hpp>


extern Coordinator coordinator;

void Movement::init(std::shared_ptr<Coordinator> _coordinator)
{
    coordinator = _coordinator;
    screenSize = sf::Vector2u(1280, 720);
}

void Movement::enemyMove(float x, float y, float &speedx, float &speedy)
{
    if (y >= screenSize.y-90)
        speedy = -(speedy);
    if (y <= 90)
        speedy = speedy*(-1);
    if (x >= screenSize.x+90)
        speedx = speedx*(-1);
    if (x <= 90)
        speedx = speedx*(-1);
}

void Movement::parallaxMove(std::shared_ptr<Transform> transform)
{
    static std::default_random_engine generator;
    static std::uniform_int_distribution<int> distribution(0, 600);

    if (transform->position.x < -600) {
        transform->position.x = 1500;
        transform->position.y = distribution(generator);
    }
}

void Movement::update()
{
    for (int const id : entity) {
        auto transform = coordinator->GetComponent<Transform>(id);
        auto velocity = coordinator->GetComponent<Velocity>(id);
        Tag tag = coordinator->getTagByid(id);

        if (tag == Tag::ENEMY) {
            enemyMove(transform->position.x, transform->position.y, velocity->speed.x,
            velocity->speed.y);
        } else if (tag == Tag::PARALLAX) {
            parallaxMove(transform);
        }
        transform->position.x += velocity->speed.x;
        transform->position.y += velocity->speed.y;

        // std::cout << sprite.textureName << std::endl;
    }
}
