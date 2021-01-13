/*
** EPITECH PROJECT, 2020
** Text.hpp
** File description:
** Text
*/

#ifndef TEXT_HPP
#define TEXT_HPP

#include <string>
#include <SFML/Graphics.hpp>

/**
 * @struct Text
 * @brief Data to use for the Text Render system
 * 
 */
struct Text
{
    /**
     * @brief font font of the text
     * 
     */
    std::string font;
    /**
     * @brief fontSize the size of the text 
     * 
     */
    int fontSize;
    /**
     * @brief color the color of the text
     * 
     */
    sf::Color color;
};

#endif /* !Text */
