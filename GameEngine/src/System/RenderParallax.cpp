/*
** EPITECH PROJECT, 2020
** Sprite.cpp
** File description:
** Sprite
*/

#include <memory>
#include "System/RenderParallax.hpp"
#include "Core/Coordinator.hpp"

extern Coordinator coordinator;

void RenderParallax::init(std::shared_ptr<Coordinator> _coordinator)
{
    coordinator = _coordinator;
}

void RenderParallax::update(sf::RenderWindow &_window)
{
    for (int id : entity) {
        auto transform = coordinator->GetComponent<Transform>(id);
        auto sprite = coordinator->GetComponent<Sprite>(id);

        sprite->sprite.setTexture(sprite->texture);
        sprite->sprite.setPosition(transform->position);
        sprite->sprite.setScale(transform->scale);
        _window.draw(sprite->sprite);
    }
}
