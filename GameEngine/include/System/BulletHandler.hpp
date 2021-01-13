/*
** EPITECH PROJECT, 2020
** BulletHandler.hpp
** File description:
** bullet handler
*/

#ifndef BULLET_HANDLER_HPP
#define BULLET_HANDLER_HPP

#include <iostream>
#include <SFML/Graphics.hpp>
#include "Core/System.hpp"
#include "Component/Sprite.hpp"
#include "Component/Transform.hpp"
#include "Component/Velocity.hpp"
#include "Component/Collision.hpp"
#include "Core/Coordinator.hpp"

/**
 * @class BulletHandler
 * @brief System that handle the destruction of the bullet if it reach the end of the screen
 */
class BulletHandler : public System
{
public:
    /**
     * @brief Initiate the coordinator and get the size of the window
     * 
     * @param coordinator coordinator to access the ecs 
     */
    void init(std::shared_ptr<Coordinator> coordinator);
    /**
     * @brief Update all the data of the component used by this system  
     * 
     */
    void update();
private:
    /**
     * @brief pointer to the coodinator
     * 
     */
    std::shared_ptr<Coordinator> coordinator;
    /**
     * @brief size of the window (X, Y)
     * 
     */
    sf::Vector2u screenSize;
    /**
     * @brief vector of the entities ready to be destroyed
     * 
     */
    std::vector<int> destroyingEntities;
};

#endif /* !MOVEMENT_HPP */
