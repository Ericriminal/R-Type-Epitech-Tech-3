/*
** EPITECH PROJECT, 2020
** ComponentArray.hpp
** File description:
** componentarray
*/

#ifndef COMPONENT_ARRAY_HPP
#define COMPONENT_ARRAY_HPP

#include <array>
#include <vector>
#include <unordered_map>
#include <iostream>
#include <cassert>
#include <map>
#include <memory>
#include "Data.hpp"

/**
 * @class IComponentArray
 * @brief interafce Component array
 * 
 * Interface of the Component array
 */
class IComponentArray
{
public:
    /**
     * @brief Destroy the IComponentArray object
     * 
     */
    virtual ~IComponentArray() = default;
    /**
     * @brief Remove a component in an array
     * 
     * @param entity the id of the entity to remove
     */
    virtual void removeComponent(int entity) = 0;
};

/**
 * @class ComponentArray
 * @brief ComponentArray contain all the array for each component
 * @tparam T the type of the component
 */
template <typename T>
class ComponentArray : public IComponentArray
{
private:
    /**
     * @brief allComponents contain all the component
     * 
     */
    std::array<std::shared_ptr<T>, maxEntities> allComponents;
    /**
     * @brief entityToIndex contain all the entity and his index
     * 
     */
    std::map<int, size_t> entityToIndex;
    /**
     * @brief indexToEntity contain all the index and his entity
     * 
     */
    std::map<size_t, int> indexToEntity;
    /**
     * @brief size is the index of the entity
     * 
     */
    int size;
public:
    /**
     * @brief Construct a new Component Array object
     * 
     */
    ComponentArray();
    /**
     * @brief Destroy the Component Array object
     * 
     */
    ~ComponentArray();

    /**
     * @brief Add a new component into all the array for the component
     * 
     * @param entity id of the entity to be added
     * @param component the type of the component to be added
     */
    void addComponent(int entity, std::shared_ptr<T> component);
    /**
     * @brief Remove a compoenent by his id
     * 
     * @param entity the id of the entity to be removed
     */
    void removeComponent(int entity) override;
    /**
     * @brief Get the Component object by the id of the entity. This function remove an entity and avoid a hole in the array by moving the last element to
     * the removed element index
     * @param entity the id of the entity
     * @return std::shared_ptr<T> return the pointer of the selected component
     */
    std::shared_ptr<T> getComponent(int entity);
    /**
     * @brief Dump function. This function dump all the array of the class
     */
    void printAllCompenent();
};

template <typename T>
ComponentArray<T>::ComponentArray()
{
    size = 0;
}

template <typename T>
ComponentArray<T>::~ComponentArray()
{
}

template <typename T>
void ComponentArray<T>::addComponent(int entity, std::shared_ptr<T> component)
{
    if (entityToIndex.find(entity) == entityToIndex.end()) {
        size_t newIndex = size;

        allComponents[newIndex] = component;
        entityToIndex[entity] = size;
        indexToEntity[size] = entity;
        size++;
    }
}

template <typename T>
void ComponentArray<T>::removeComponent(int entity)
{
    if (entityToIndex.find(entity) != entityToIndex.end()) {

        int lastEntity = indexToEntity[size-1];
        int deletedIndex = entityToIndex[entity];

        allComponents[entityToIndex[entity]] = allComponents[size-1];
        // last entity points to pos of deleted entity
        entityToIndex[lastEntity] = deletedIndex;
        // deleted index position points to last entity
        indexToEntity[deletedIndex] = lastEntity;

        entityToIndex.erase(entity);
        indexToEntity.erase(size-1);
        size--;
    }
}

template <typename T>
std::shared_ptr<T> ComponentArray<T>::getComponent(int entity)
{
    if (entityToIndex.find(entity) == entityToIndex.end()) {
        std::cout << "tried id " << entity << std::endl;
        exit(84);
    }
    return this->allComponents[entityToIndex[entity]];
}

template <typename T>
void ComponentArray<T>::printAllCompenent()
{
    std::cout << "entity to index" << std::endl;
    for (auto itr = this->entityToIndex.begin(); itr != this->entityToIndex.end(); itr++) {
        std::cout << '\t' << itr->first << '\t' << itr->second << '\n';
    }
    std::cout << "index to entity" << std::endl;
    for (auto itr = this->indexToEntity.begin(); itr != this->indexToEntity.end(); itr++) {
        std::cout << '\t' << itr->first << '\t' << itr->second << '\n';
    }
    for (size_t i = 0; i <= this->allComponents.size() && this->allComponents[i] != ""; i++) {
        std::cout << this->allComponents[i] << std::endl;
    }
}

#endif /* !COMPONENT_ARRAY */
