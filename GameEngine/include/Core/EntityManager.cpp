/*
** EPITECH PROJECT, 2020
** EntityManager.cpp
** File description:
** Entity manager
*/

#include "Core/EntityManager.hpp"
#include <algorithm>

EntityManager::EntityManager()
{
    for (int count = 1; count != maxEntities; count++)
        allAvailableId.push_back(count);
}

int EntityManager::createEntity(int idEntity, Tag tag)
{
    int entityId = 0;
    if (!allAvailableId.empty() && idEntity == -1) {
        entityId = allAvailableId[0];
        tagEntities[entityId] = tag;
        allAvailableId.erase(allAvailableId.begin());
    } else {
        entityId = idEntity;
        allAvailableId.erase(std::find(allAvailableId.begin(), allAvailableId.end(), idEntity));
        tagEntities[entityId] = tag;
    }
    
    return entityId; // error if return 0
}

Tag EntityManager::getTagByid(int id) const
{
    return tagEntities[id];
}

void EntityManager::destroyEntity(int entityId)
{
    allAvailableId.push_back(entityId);
}
