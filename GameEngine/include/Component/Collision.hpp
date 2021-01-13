/*
** EPITECH PROJECT, 2020
** Collision.hpp
** File description:
** collision
*/
#ifndef COLLISION_HPP
#define COLLISION_HPP

#include <SFML/Graphics.hpp>

/**
 * @struct Collision
 * @brief Data to use for the Collision system
 * 
 */
struct Collision
{
    /**
     * @brief collisionBox is the area of the collision
     * 
     */
    sf::FloatRect collisionBox;
};

#endif /* !COLLISION */
