/*
** EPITECH PROJECT, 2020
** EntityManager.hpp
** File description:
** Entity manager
*/

#ifndef _ENTITYMANAGER_
#define _ENTITYMANAGER_

#include <vector>
#include <array>
#include "Data.hpp"
#include <iostream>

/**
 * @class EntityManager
 * @brief Manager of the entities. This class manage all the array of the entites
 * 
 */
class EntityManager {
    public:
        /**
         * @brief Construct a new Entity Manager object
         * 
         */
        EntityManager();
        /**
         * @brief Create a Entity by adding a tag in the array tagEntites and erasing a id in allAvailableId vector
         * 
         * @param tag the tag of the entity
         * @return int the new id of the entity
         */
        int createEntity(int idEntity, Tag tag);
        /**
         * @brief Destroy an entity by the given id of entity
         * 
         * @param entity the id of the entity to be destroyed
         */
        void destroyEntity(int entity);
        /**
         * @brief Get the Tag if the entity By his id 
         * 
         * @param id the id of the entity
         * @return Tag the tag of the given id of entity
         */
        Tag getTagByid(int id) const;
    private:
        /**
         * @brief the vector of the available id
         * 
         */
        std::vector<int> allAvailableId;
        /**
         * @brief the map of the tag and the entites
         * 
         */
        std::array<Tag, maxEntities> tagEntities;
};

#endif
