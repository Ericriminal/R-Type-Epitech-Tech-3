/*
** EPITECH PROJECT, 2020
** Data.hpp
** File description:
** data
*/

#ifndef DATA_HPP
#define DATA_HPP

/**
 * @enum Tag
 * @brief Enmu to disting all the entity, specially to disting each system
 * 
 */
enum Tag {
    PLAYER,
    PLAYER_BIS,
    OBSTACLE,
    ENEMY,
    BULLET,
    ENEMY_BULLET,
    PARALLAX,
    MUSIC,
    BUTTON,
    TEXT,
    TEXTINPUT,
    MISC
};

/**
 * @brief The maximum capacity of entities
 * 
 */
const int maxEntities = 3000;

#endif
