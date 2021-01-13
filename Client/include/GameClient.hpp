/*
** EPITECH PROJECT, 2020
** game.hpp
** File description:
** game
*/

#ifndef GAMECLIENT_HPP
#define GAMECLIENT_HPP

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "Core/Coordinator.hpp"
#include "Component/Sprite.hpp"
#include "Component/Transform.hpp"
#include "Component/Velocity.hpp"
#include "Component/Collision.hpp"
#include "System/RenderSprite.hpp"
#include "System/RenderParallax.hpp"
#include "System/Movement.hpp"
#include "System/PlayerInput.hpp"
#include "System/Collide.hpp"
#include "System/BulletHandler.hpp"
#include "System/Shoot.hpp"
#include "System/GetAllPos.hpp"
#include "Entity/EntityArray.hpp"
#include "Client.hpp"

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
     * @param _coordinator coordinator to access the ecs
     * @param client pointer to the client
     * @param _window window of the game
     */
    Game(std::shared_ptr<Coordinator> _coordinator, std::shared_ptr<Client> client,
        sf::RenderWindow &_window);
    /**
     * @brief Destroy the Game object
     * 
     */
    ~Game();
    /**
     * @brief Start the game for the client
     * 
     */
    void startGame();
private:
    /**
     * @brief boolean to check if it is running
     * 
     */
    bool game;
    /**
     * @brief window of the game
     * 
     */
    sf::RenderWindow &window;
    /**
     * @brief pointer to Client
     * 
     */
    std::shared_ptr<Client> client;
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
     * @brief pointer to RenderSprite
     * 
     */
    std::shared_ptr<RenderSprite> renderSprite;
    /**
     * @brief pointer to PlayerInput
     * 
     */
    std::shared_ptr<PlayerInput> playerInput;
    /**
     * @brief pointer to RenderParallax
     * 
     */
    std::shared_ptr<RenderParallax> renderParallax;
    /**
     * @brief pointer to GetAllPos
     * 
     */
    std::shared_ptr<GetAllPos> getServerPos;
    /**
     * @brief type of the last package 
     * 
     */
    int lastPackageType;

    /**
     * @brief Update all state of the game
     * 
     * @param actualTime the time of the game
     */
    void update(sf::Time actualTime);
    /**
     * @brief Initiate the pointer of the game
     * 
     */
    void initSystem();
    /**
     * @brief Create all the entity for the creation of the game
     * 
     */
    void firstObjects();
    // void sendAllData();
};

#endif
