/*
** EPITECH PROJECT, 2020
** PlayerInput.hpp
** File description:
** PlayerInput
*/
#ifndef PLAYERINPUT_HPP
#define PLAYERINPUT_HPP

#include <iostream>
#include <SFML/Graphics.hpp>
#include "Core/System.hpp"
#include "Component/Sprite.hpp"
#include "Component/Transform.hpp"
#include "Component/Velocity.hpp"
#include "Entity/EntityArray.hpp"
#include "Core/Coordinator.hpp"
#include "Client.hpp"

/**
 * @class PlayerInput
 * @brief System that handle the input of player
 * 
 */
class PlayerInput : public System
{
public:
    /**
     * @brief Initiate the coordinator, get the size of the window and get the dynamic lib of entities
     * 
     * @param lib the pointer of the array of shared lib 
     * @param _coordinator coordinator to access the ecs 
     */
    void init(std::shared_ptr<EntityArray> lib, std::shared_ptr<Coordinator> _coordinator,
        std::shared_ptr<Client> _client);
    /**
     * @brief Update all the data of the component used by this system
     * 
     * @param actualTime the current time of game
     */
    void update(sf::Time actualTime, sf::RenderWindow &_window);
private:
    /**
     * @brief pointer of the array of lib
     * 
     */
    std::shared_ptr<EntityArray> test;
    /**
     * @brief pointer to the coodinator
     * 
     */
    std::shared_ptr<Coordinator> coordinator;
    /**
     * @brief pointer to the client
     * 
     */
    std::shared_ptr<Client> client;
    /**
     * @brief the cooldown of the shoot
     * 
     */
    sf::Time shootCooldown;
    /**
     * @brief the timer of the shoot cooldown
     * 
     */
    sf::Time actualShootCooldown;
};

#endif /* !PLAYERINPUT */
