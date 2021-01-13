/*
** EPITECH PROJECT, 2020
** Collide.hpp
** File description:
** Collide
*/

#ifndef COLLIDE_HPP
#define COLLIDE_HPP

#include <iostream>
#include <SFML/Graphics.hpp>
#include "Core/Coordinator.hpp"
#include "Core/System.hpp"
#include "Component/Sprite.hpp"
#include "Component/Transform.hpp"
#include "Component/Velocity.hpp"
#include "Component/Collision.hpp"

/**
 * @class Collide
 * @brief System that check the collision bewteen entities 
 * 
 */
class Collide : public System
{
public:
    /**
     * @brief Initiate the coordinator
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
     * @brief vector of the entities ready to be destroyed
     * 
     */
    std::vector<int> destroyingEntities;
    /**
     * @brief Check the collision between the player bullet and the given id
     * 
     * @param bullet the player bullet sprite
     * @param id the id of the entity
     */
    void checkBullet(const sf::Sprite &bullet, int id);
    /**
     * @brief Check the collision between the enemy bullet and the given id
     * 
     * @param bullet the enemy bullet sprite
     * @param id the id of the entity
     */
    void checkEnemyBullet(const sf::Sprite &bullet, int id);
};

#endif /* !COLLISION */
