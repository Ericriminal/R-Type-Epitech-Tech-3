/*
** EPITECH PROJECT, 2020
** Transform.hpp
** File description:
** transform
*/

#ifndef POSITION_HPP
#define POSITION_HPP

#include <SFML/Graphics.hpp>

/**
 * @struct Transform
 * @brief Data to use for the Positionning system
 * 
 */
struct Transform
{
    /**
     * @brief Construct to fill the structure
     * 
     * @param _position position of the entity
     * @param _scale scaling of the entity
     * @param _rotation rotation of the entity
     */
    Transform(sf::Vector2<float> _position, sf::Vector2<float> _scale,
    float _rotation)
    : position(_position), scale(_scale), rotation(_rotation)
    {}
    /**
     * @brief position X and Y of the entity
     * 
     */
    sf::Vector2<float> position;
    /**
     * @brief scaling X and Y of the entity
     * 
     */
    sf::Vector2<float> scale;
    /**
     * @brief roation X and Y of the entity
     * 
     */
    float rotation;
};

#endif /* !TRANSFORM */
