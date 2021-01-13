/*
** EPITECH PROJECT, 2020
** Sprite.hpp
** File description:
** sprite
*/
#ifndef SPRITE_HPP
#define SPRITE_HPP

#include <string>
#include <SFML/Graphics.hpp>
#include <memory>

/**
 * @struct Sprite
 * @brief Data to use for the Sprite Renderer system
 * 
 */
struct Sprite
{
    /**
     * @brief Construct to fill the Sprite structure
     * 
     * @param _textureName path to the texture
     * @param _texture texture of the entity
     * @param _sprite sprite of the entity
     */
    Sprite(std::string _textureName, sf::Texture _texture,
    sf::Sprite _sprite)
    : textureName(_textureName), texture(_texture), sprite(_sprite)
    {}
    /**
     * @brief textureName path of the texture
     * 
     */
    std::string textureName;
    /**
     * @brief texture texture of the entity
     * 
     */
    sf::Texture texture;
    /**
     * @brief sprite sprite of the entity
     * 
     */
    sf::Sprite sprite;
};

#endif /* !SPRITE */
