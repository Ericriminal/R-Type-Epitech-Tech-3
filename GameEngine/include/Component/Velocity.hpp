/*
** EPITECH PROJECT, 2020
** Velocity.hpp
** File description:
** velocity
*/

#ifndef VELOCITY_HPP
#define VELOCITY_HPP

#include <SFML/Graphics.hpp>

/**
 * @struct Velocity
 * @brief Data to use for the Movement system
 * 
 */
struct Velocity
{
    /**
     * @brief Construct to fill the structure
     * 
     * @param _speed movement speed of the entity
     * @param acceleration acceleration speed of the entity
     */
    Velocity(sf::Vector2<float> _speed, int acceleration)
    : speed(_speed), acceleration(acceleration)
    {}
    /**
     * @brief the movement speed in Y and Y of the entity 
     * 
     */
    sf::Vector2<float> speed;
    /**
     * @brief the acceleration of the entity
     * 
     */
    int acceleration;
};

#endif /* !VELOCITY */
