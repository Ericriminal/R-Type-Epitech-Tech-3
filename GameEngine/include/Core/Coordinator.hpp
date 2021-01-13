/*
** EPITECH PROJECT, 2020
** Coordinator.hpp
** File description:
** coordinator
*/

#ifndef COORDINATOR_HPP
#define COORDINATOR_HPP

#include "Core/EntityManager.hpp"
#include "Core/ComponentManager.hpp"
#include "Core/SystemManager.hpp"
#include "Data.hpp"
#include <memory>

/**
 * @class Coordinator
 * @brief Coordinator of the gale engine, this class point to all the manager (EntityManger|ComponentManager|SystemManager)
 * to manage them
 */
class Coordinator
{
private:
    /**
     * @brief pointer to EntityManager
     * 
     */
    std::shared_ptr<EntityManager> entity;
    /**
     * @brief pointer to ComponentManager
     * 
     */
    std::shared_ptr<ComponentManager> component;
    /**
     * @brief pointer to SystemManager
     * 
     */
    std::shared_ptr<SystemManager> system;
public:
    /**
     * @brief boolean to check if the game is opened by the client
     * 
     */
    bool isClient;

    //ENTITY MANAGER
    /**
     * @brief Construct a new Coordinator object. Constructor called by the client
     * 
     * @param client boolean to know if it is called by client or server
     */
    Coordinator(bool client)
    {
        isClient = client;
        entity = std::make_shared<EntityManager>();
        component = std::make_shared<ComponentManager>();
        system = std::make_shared<SystemManager>();
    };
    /**
     * @brief Construct a new Coordinator object. Constructor called by the server
     * 
     */
    Coordinator(){
        isClient = false;
        entity = std::make_shared<EntityManager>();
        component = std::make_shared<ComponentManager>();
        system = std::make_shared<SystemManager>();};

    /**
     * @brief Create a Entity object. This function return a new id for the new entity and add a tag to the system entity array
     * 
     * @param tag the tag of the entity
     * @return int the id of the entity
     */
    int CreateEntity(int idForEntity, Tag tag)
    {
        int entityId = this->entity->createEntity(idForEntity, tag);
        this->system->addEntityToSystem(entityId, tag);
        return (entityId);
    }

    /**
     * @brief Destroy and entity, by calling all the function that remove an entity of all manager
     * 
     * @param entity the id of the entity to be removed
     */
    void DestroyEntity(int entity)
    {
        this->entity->destroyEntity(entity);
        this->component->destroyEntity(entity);
        this->system->entityDestroyed(entity);
    }

    /**
     * @brief Get the Tag of the entity By his id
     * 
     * @param id the id of the entity
     * @return Tag the rag of the entity
     */
    Tag getTagByid(int id)
    {
        return (this->entity->getTagByid(id));
    }

    //COMPONENT MANAGER
    /**
     * @brief Register an unknow component to create his array
     * 
     * @tparam T the type of the new component
     */
    template<typename T>
    void RegisterComponent();
    /**
     * @brief Add a new component for the given id of the entity
     * 
     * @tparam T the type of the component
     * @param entity the id en of entity
     * @param component the component to be added
     */
    template<typename T>
    void AddComponent(int entity, std::shared_ptr<T> component);
    /**
     * @brief Remove a component for the given id of the entity
     * 
     * @tparam T the type of the component
     * @param entity the id of the entity
     */
    template<typename T>
    void RemoveComponent(int entity);
    /**
     * @brief Get the Component object. This function get the component by the given id
     * 
     * @tparam T the type of componenet
     * @param entity the id of the entity
     * @return std::shared_ptr<T> the pointer of the component
     */
    template<typename T>
    std::shared_ptr<T> GetComponent(int entity);
    
    //SYSTEM MANAGER
    /**
     * @brief Register an unknow system to create his array
     * 
     * @tparam T the type of the system
     * @return std::shared_ptr<T> of the system
     */
    template<typename T>
    std::shared_ptr<T> RegisterSystem();
    /**
     * @brief Add a tag to the system to know which entity the system belong
     * 
     * @tparam T the type of the system
     * @param tag the added tag
     */
    template<typename T>
    void AddSystemTag(Tag tag);
};

template<typename T>
void Coordinator::RegisterComponent()
{
    this->component->createComponentArray<T>();
}

template<typename T>
void Coordinator::AddComponent(int entity, std::shared_ptr<T> component)
{
    this->component->addComponent<T>(entity, component);
}

template<typename T>
void Coordinator::RemoveComponent(int entity)
{
    this->component->removeComponent<T>(entity);
}

template<typename T>
std::shared_ptr<T> Coordinator::GetComponent(int entity)
{
    return (this->component->getComponent<T>(entity));
}

template<typename T>
std::shared_ptr<T> Coordinator::RegisterSystem()
{
    return (this->system->registerSystem<T>());
}

template<typename T>
void Coordinator::AddSystemTag(Tag tag)
{
    this->system->addTag<T>(tag);
}

#endif /* !COORDINATOR */
