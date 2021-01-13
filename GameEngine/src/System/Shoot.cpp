/*
** EPITECH PROJECT, 2020
** Shoot.cpp
** File description:
** Shoot
*/

#include <memory>
#include "System/Shoot.hpp"
#include "Core/Coordinator.hpp"


void Shoot::init(std::shared_ptr<EntityArray> lib, std::shared_ptr<Coordinator> _coordinator)
{
    test = lib;
    coordinator = _coordinator;
    shootCooldown = sf::seconds(0.5f);
    actualShootCooldown = sf::seconds(0.5f);
}

void Shoot::update(sf::Time actualTime)
{
    actualShootCooldown += actualTime;
    if (actualShootCooldown >= shootCooldown) {
        for (int id : entity) {
            // std::cout << "enemy id : " << id << std::endl;
            // std::cout << "shot id : " << id << std::endl;
            test->entities["EnemyBullet.so"]("../ressources/r-typesheet1.gif", coordinator->GetComponent<Transform>(id)->position, coordinator,-1);
            actualShootCooldown = sf::Time::Zero;
        }
    }
}
