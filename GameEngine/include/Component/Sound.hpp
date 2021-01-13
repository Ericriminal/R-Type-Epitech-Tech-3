/*
** EPITECH PROJECT, 2020
** Sound.php
** File description:
** Sound
*/

#ifndef SOUND_HPP
#define SOUND_HPP

#include <string>
#include <SFML/Graphics.hpp>

/**
 * @struct Sound
 * @brief Data to use for the Sound system
 * 
 */
struct Sound
{
    /**
     * @brief music is the path to the music file
     * 
     */
    std::string music;
    /**
     * @brief volume is the volume to set to the music
     * 
     */
    int volume;
    /**
     * @brief loop is a boolean to repeat the music or not
     * 
     */
    bool loop;
};

#endif /* !SOUND */
