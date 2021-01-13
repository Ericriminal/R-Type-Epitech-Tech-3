/*
** EPITECH PROJECT, 2020
** ComponentManager.hpp
** File description:
** ComponentManager
*/

#ifndef COMPONENT_MANAGER_HPP
#define COMPONENT_MANAGER_HPP

#include "Core/ComponentArray.hpp"

/**
 * @class ComponentManager 
 * @brief Manager of the component. This class manage all the array in the class ComponenetArray
 */
class ComponentManager {
public:
    /**
     * @brief Construct a new Component Manager object
     * 
     */
    ComponentManager() = default;
    /**
     * @brief Destroy the Component Manager object
     * 
     */
    ~ComponentManager() = default;

    /**
     * @brief Create a Component Array object. This function create a new array of the component with the class ComponentArray
     * 
     * @tparam T the type of the component
     */
    template<typename T>
    void createComponentArray()
    {
        std::string name = typeid(T).name();

        if (allComponentArray.find(name) == allComponentArray.end())
            allComponentArray[name] = std::make_shared<ComponentArray<T>>();
    }
    /**
     * @brief Add a new component and push it in the all the array of component
     * 
     * @tparam T the type of component
     * @param entity the id of the entity that which belong the component
     * @param component the new component to be added
     */
    template<typename T>
    void addComponent(int entity, std::shared_ptr<T> component)
    {
        GetComponentArray<T>()->addComponent(entity, component);
    }
    /**
     * @brief Remove a component with the id of the entity
     * 
     * @tparam T the type of the component to be removed
     * @param entity the id of the entity to be removed
     */
    template<typename T>
    void removeComponent(int entity)
    {
        GetComponentArray<T>()->removeComponent(entity);
    }
    /**
     * @brief Get the Component object. This function get the component by th id of the entity
     * 
     * @tparam T the type of the component to be get
     * @param entity the id of the entity
     * @return std::shared_ptr<T> the pointer of the component
     */
    template<typename T>
    std::shared_ptr<T> getComponent(int entity)
    {
        return GetComponentArray<T>()->getComponent(entity);
    }
    /**
     * @brief Destroy the entity by his id and remove all of his component in the array of component
     * 
     * @param entity id of the entity
     */
    void destroyEntity(int entity)
    {
        for (auto itr = this->allComponentArray.begin(); itr != this->allComponentArray.end(); itr++)
            itr->second->removeComponent(entity);
    }

private:
    /**
     * @brief map that contains all of the array of component
     * 
     */
    std::map<std::string, std::shared_ptr<IComponentArray>> allComponentArray;

    /**
     * @brief Get the Component Array object. this function get the array of component by his type
     * 
     * @tparam T type of the component
     * @return std::shared_ptr<ComponentArray<T>> the pointer of the array of component  
     */
    template<typename T>
    std::shared_ptr<ComponentArray<T>> GetComponentArray()
    {
        return std::static_pointer_cast<ComponentArray<T>>(allComponentArray[typeid(T).name()]);
    }
};

#endif
