/*
** EPITECH PROJECT, 2020
** Shoot.hpp
** File description:
** Shoot
*/
#ifndef SHOOT_HPP
#define SHOOT_HPP

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "Core/System.hpp"
#include "Core/Coordinator.hpp"
#include "Component/Sprite.hpp"
#include "Component/Transform.hpp"
#include "Component/Velocity.hpp"
#include "Component/Collision.hpp"
#include "Entity/EntityArray.hpp"

/**
 * @class Shoot
 * @brief System that handle all shoot
 */
class Shoot : public System
{
public:
    /**
     * @brief 
     * 
     * @param lib the pointer of the array of shared lib 
     * @param _coordinator coordinator to access the ecs 
     */
    void init(std::shared_ptr<EntityArray> lib, std::shared_ptr<Coordinator> _coordinator);
    /**
     * @brief Update all the data of the component used by this system
     * 
     * @param actualTime the current time of game
     */
    void update(sf::Time actualTime);
private:
    /**
     * @brief pointer of the array of lib
     * 
     */
    std::shared_ptr<EntityArray> test;
    /**
     * @brief pointer to the coodinator
     * 
     */
    std::shared_ptr<Coordinator> coordinator;
    /**
     * @brief the cooldown of the shoot
     * 
     */
    sf::Time shootCooldown;
    /**
     * @brief the timer of the shoot cooldown
     * 
     */
    sf::Time actualShootCooldown;
};

#endif /* !SHOOT_HPP */
