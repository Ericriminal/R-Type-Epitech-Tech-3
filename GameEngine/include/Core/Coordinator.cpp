/*
** EPITECH PROJECT, 2020
**
** File description:
**
*/

#include <memory>
#include "Core/Coordinator.hpp"

Coordinator::Coordinator(bool client) : window(sf::VideoMode(1280, 720), "dab")
{
    isClient = client;
    entity = std::make_unique<EntityManager>();
    component = std::make_unique<ComponentManager>();
    system = std::make_unique<SystemManager>();
}

Coordinator::Coordinator(){
    isClient = false;
}

int Coordinator::CreateEntity(Tag tag)
{
    int entityId = this->entity->createEntity(tag);
    this->system->addEntityToSystem(entityId, tag);
    return (entityId);
}

void Coordinator::DestroyEntity(int entity)
{
    this->entity->destroyEntity(entity);
    this->component->destroyEntity(entity);
    this->system->entityDestroyed(entity);
    std::cout << "end destroying entity" << std::endl;
}

Tag Coordinator::getTagByid(int id)
{
    return (this->entity->getTagByid(id));
}
