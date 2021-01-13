/*
** EPITECH PROJECT, 2020
** RenderParallax.hpp
** File description:
** RenderParallax
*/
#ifndef RENDERPARALLAX_HPP
#define RENDERPARALLAX_HPP

#include <iostream>
#include <random>
#include "Core/System.hpp"
#include "Component/Sprite.hpp"
#include "Component/Transform.hpp"
#include "Component/Velocity.hpp"
#include "Component/Collision.hpp"
#include "Core/Coordinator.hpp"

/**
 * @class RenderParallax
 * @brief System that handle parallax
 * 
 */
class RenderParallax : public System
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

#endif /* !RENDERPARALLAX_HPP */
