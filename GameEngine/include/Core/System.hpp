/*
** EPITECH PROJECT, 2020
** System.hpp
** File description:
** system
*/

#ifndef SYSTEM_HPP
#define SYSTEM_HPP

#include <set>
#include <vector>

/**
 * @class System
 * @brief the array of each system
 * 
 */
class System
{
public:
    /**
     * @brief the set of entities (list of all entities that conatin this system)
     * 
     */
    std::set<int> entity;
};

#endif /* !SYSTEM */
