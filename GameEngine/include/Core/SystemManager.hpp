/*
** EPITECH PROJECT, 2020
** SystemManager.hpp
** File description:
** systemmanager
*/

#ifndef SYSTEM_MANAGER_HPP
#define SYSTEM_MANAGER_HPP

#include <map>
#include <memory>
#include "Data.hpp"
#include "Core/System.hpp"

/**
 * @class SystemManager
 * @brief Manager of all the system
 * 
 */
class SystemManager
{
private:
    /**
     * @brief the map of all the tag, their name and their value
     * 
     */
    std::map<const char*, std::vector<Tag>> tag_map;
    /**
     * @brief the map of all the system, their name and their pointer
     * 
     */
    std::map<const char*, std::shared_ptr<System>> system_map;
public:
    /**
     * @brief Register a system by adding him to the system_map
     * 
     * @tparam T the type of the system
     * @return std::shared_ptr<T> the pointer of the system
     */
    template<typename T>
    std::shared_ptr<T> registerSystem();
    /**
     * @brief Add a tag in the tag_map
     * 
     * @tparam T the type of the tag
     * @param tag the given tag to be added
     */
    template<typename T>
    void addTag(Tag tag);
    /**
     * @brief Destroy an entity by his id in the map of system
     * 
     * @param entity the id of the entoty to be destroyed
     */
    void entityDestroyed(int entity)
    {
        for (auto it : this->system_map)
        {
            it.second->entity.erase(entity);
        }
    }

    /**
     * @brief Dump the system map
     * 
     */
    void printAllSystem()
    {
        std::cout << "System map contain : " << std::endl;
        for (auto itr = this->system_map.begin(); itr != this->system_map.end(); itr++) {
            std::cout << '\t' << itr->first << '\t' << itr->second << '\n';
        }
        std::cout << '\n';
    }

    /**
     * @brief Add an new entity to the system map (class system)
     * 
     * @param entity the id of the entity
     * @param tag the tag of the entity
     */
    void addEntityToSystem(int entity, Tag tag)
    {
        for (auto &it : this->system_map) {
            // std::cout << "dab" << it.first << std::endl;
            for (auto systag : this->tag_map[it.first]) {
                // std::cout << systag << std::endl;
                if (systag == tag) {
                    // std::cout << "mega dab" << std::endl;
                    it.second->entity.insert(entity);
                    // std::cout << it.second->entity.size() << std::endl;
                    break;
                }
            }
        }
    }
};

template<typename T>
std::shared_ptr<T> SystemManager::registerSystem()
{
    auto system = std::make_shared<T>();

    this->system_map[typeid(T).name()] = system;
    return(system);
}

template<typename T>
void SystemManager::addTag(Tag tag)
{
    // this->tag_map.insert(std::pair<const char*, Tag>(typeid(T).name(), tag));
    this->tag_map[typeid(T).name()].push_back(tag);
}


#endif /* !SYSTEM_MANAGER */
