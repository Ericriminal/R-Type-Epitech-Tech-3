/*
** EPITECH PROJECT, 2020
** game.hpp
** File description:
** game
*/

#ifndef GAMESERVER_HPP
#define GAMESERVER_HPP

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <thread>
#include "Core/Coordinator.hpp"
#include "Component/Sprite.hpp"
#include "Component/Transform.hpp"
#include "Component/Velocity.hpp"
#include "Component/Collision.hpp"
#include "System/RenderSprite.hpp"
#include "System/RenderParallax.hpp"
#include "System/Movement.hpp"
#include "System/Collide.hpp"
#include "System/BulletHandler.hpp"
#include "System/Shoot.hpp"
#include "System/SendCreation.hpp"
#include "System/GetPlayerInput.hpp"
#include "System/SendAllData.hpp"
#include "System/SendEntityCreation.hpp"
#include "Entity/EntityArray.hpp"
#include "Server.hpp"

/**
 * @brief 
 * @class Game
 */
class Game
{
public:
    /**
     * @brief Construct a new Game object
     * 
     * @param _coordinator the coordinator to access the ecs
     * @param server the pointer to the server
     */
    Game(std::shared_ptr<Coordinator> _coordinator, std::shared_ptr<Server> server);
    /**
     * @brief Destroy the Game object
     * 
     */
    ~Game();
    /**
     * @brief Start the game
     * 
     */
    void startGame();
private:
    /**
     * @brief boolean to check if the game is still running
     * 
     */
    bool game;
    /**
     * @brief pointer to Server
     * 
     */
    std::shared_ptr<Server> server;
     /**
     * @brief pointer to SendCreation
     * 
     */
    std::shared_ptr<SendCreation> creation;
     /**
     * @brief pointer to SendAllData
     * 
     */
    std::shared_ptr<SendAllData> sendDataPos;
     /**
     * @brief pointer to EntityArray
     * 
     */
    std::shared_ptr<EntityArray> test;
     /**
     * @brief pointer to Coordinator
     * 
     */
    std::shared_ptr<Coordinator> coordinator;
     /**
     * @brief pointer to Movement
     * 
     */
    std::shared_ptr<Movement> movement;
     /**
     * @brief pointer to Collide
     * 
     */
    std::shared_ptr<Collide> collision;
     /**
     * @brief pointer to BulletHandler
     * 
     */
    std::shared_ptr<BulletHandler> bulletHandler;
     /**
     * @brief pointer to Shoot
     * 
     */
    std::shared_ptr<Shoot> enemyShoot;
     /**
     * @brief pointer to GetPlayerInput
     * 
     */
    std::shared_ptr<GetPlayerInput> getPlayerInput;
     /**
     * @brief pointer to SendEntityCreation
     * 
     */
    std::shared_ptr<SendEntityCreation> entityCreate;

    /**
     * @brief Initiate all the entities
     * 
     */
    void initStartEntity();
    /**
     * @brief Update state of the game in a thread
     * 
     * @param mutex the mutex to give access of the data
     */
    void doUpdates(std::mutex &mutex);
    /**
     * @brief Update all the state of the game
     * 
     * @param actualTime 
     */
    void update(sf::Time actualTime);
    /**
     * @brief Initiate all the system
     * 
     */
    void initSystem();
    /**
     * @brief Connecte the firste player to the game
     * 
     */
    void connectFirstPlayer();
    // void sendAllData();
};

#endif
