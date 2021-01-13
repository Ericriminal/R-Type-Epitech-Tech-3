/*
** EPITECH PROJECT, 2020
** Sprite.cpp
** File description:
** Sprite
*/

#include <memory>
#include "System/RenderSprite.hpp"

void RenderSprite::init(std::shared_ptr<Coordinator> _coordinator)
{
    coordinator = _coordinator;
    for (int id : entity) {
        auto transform = coordinator->GetComponent<Transform>(id);
        auto sprite = coordinator->GetComponent<Sprite>(id);
        sprite->sprite.setPosition(transform->position);
    }
}

void RenderSprite::update(sf::RenderWindow &_window)
{
    // std::cout << "insh je print des images" << std::endl;
    // std::cout << entity.size() << std::endl;
    for (int id : entity) {
        auto transform = coordinator->GetComponent<Transform>(id);
        auto sprite = coordinator->GetComponent<Sprite>(id);
        sprite->sprite.setPosition(transform->position);
        sprite->sprite.setTexture(sprite->texture);
        _window.draw(sprite->sprite);
        // std::cout << transform.position.x << ": " << transform.position.y << std::endl;
    }
}
