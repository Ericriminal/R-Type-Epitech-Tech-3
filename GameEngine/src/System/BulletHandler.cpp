/*
** EPITECH PROJECT, 2020
** BulletHandler.cpp
** File description:
** BulletHandler
*/

#include "System/BulletHandler.hpp"
#include "Core/Coordinator.hpp"


void BulletHandler::init(std::shared_ptr<Coordinator> _coordinator)
{
    coordinator = _coordinator;
    screenSize = sf::Vector2u(1280, 720);
}

void BulletHandler::update()
{
    for (int id : entity) {
        auto const &transform = coordinator->GetComponent<Transform>(id);
        if (transform->position.x > screenSize.x + 55 || transform->position.x < -55)
            destroyingEntities.push_back(id);
    }
    for (int id : destroyingEntities)
        coordinator->DestroyEntity(id);
    destroyingEntities.clear();
}
