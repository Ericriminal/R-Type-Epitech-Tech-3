/*
** EPITECH PROJECT, 2020
** Movement.hpp
** File description:
** Movement
*/

#ifndef MOVE_HPP
#define MOVE_HPP

#include <iostream>
#include <SFML/Graphics.hpp>
#include <random>
#include "Core/System.hpp"
#include "Component/Sprite.hpp"
#include "Component/Transform.hpp"
#include "Component/Velocity.hpp"
#include "Component/Collision.hpp"
#include "Core/Coordinator.hpp"

/**
 * @class Movement
 * @brief System that handle the movement
 */
class Movement : public System
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
     * @brief Move the enemies
     * 
     * @param x the position of enenmy in x
     * @param y the position of enenmy in y
     * @param speedx the velocity of enemy in x
     * @param speedy the velocity of enemy in y
     */
    void enemyMove(float x, float y, float& speedx, float&speedy);

    void parallaxMove(std::shared_ptr<Transform> transform);

};

#endif /* !MOVEMENT_HPP */
