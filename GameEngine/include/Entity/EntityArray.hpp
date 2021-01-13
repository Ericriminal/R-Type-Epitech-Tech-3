/*
** EPITECH PROJECT, 2020
** EntityArray.hpp
** File description:
** EntityArray
*/

#ifndef ENTITY_ARRAY_HPP
#define ENTITY_ARRAY_HPP

#include "Core/Coordinator.hpp"
#include <SFML/Graphics.hpp>
#include <dirent.h>
#include <dlfcn.h>
#include <iostream>
#include <sstream>
#include <string>

/**
 * @class EntityArray
 * @brief Build a array of entities librairy
 */
class EntityArray
{
    private:
        /**
         * @brief typedef of the dynamic librairy
         * 
         */
        typedef int (*entity)(const std::string &texturePath, sf::Vector2f pos, std::shared_ptr<Coordinator> coordinator,
            int entityId);
    public:
        /**
         * @brief map of all the dynamic library of entities
         * 
         */
        std::map<std::string, entity> entities;
        /**
         * @brief Construct a new Entity Array object. This function build the map by adding all the dynamic
         * 
         * @param path the path of the directory of dynamic lib
         */
        EntityArray(const std::string& path);
        /**
         * @brief get all the dynamic lib in the given path
         * 
         * @param name path of the all the dynamic lib directory
         * @return std::vector<std::string> the vector of alle the dynamic lib
         */
        std::vector<std::string> read_directory(const std::string& name);
};

#endif /* !ENTITY_ARRAY */
