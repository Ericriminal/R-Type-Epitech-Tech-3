/*
** EPITECH PROJECT, 2020
** RenderSprite.hpp
** File description:
** RenderSprite
*/
#ifndef RENDERSPRITE_HPP
#define RENDERSPRITE_HPP

#include <iostream>
#include "Core/System.hpp"
#include "Component/Sprite.hpp"
#include "Component/Transform.hpp"
#include "Component/Velocity.hpp"
#include "Component/Collision.hpp"
#include "Core/Coordinator.hpp"

/**
 * @class RenderSprite
 * @brief System that render entities
 */
class RenderSprite : public System
{
private:
    /**
     * @brief pointer to the coodinator
     * 
     */
    std::shared_ptr<Coordinator> coordinator;
public:
    /**
     * @brief Initiate the coordinator
     * 
     * @param _coordinator 
     */
    void init(std::shared_ptr<Coordinator> _coordinator);
    /**
     * @brief Update all the data of the component used by this system
     * 
     */
    void update(sf::RenderWindow &_window);
};

#endif /* !RENDERSPRITE_HPP */
