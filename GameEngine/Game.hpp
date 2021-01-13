/*
** EPITECH PROJECT, 2020
** game.hpp
** File description:
** game
*/

#ifndef GAME_HPP
#define GAME_HPP

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
#include "Entity/EntityArray.hpp"

/**
 * @class Game
 * @brief class that handle the entire game
 */
class Game
{
public:
    /**
     * @brief Construct a new Game object
     * 
     * @param _coordinator coordinator to access the ecs
     */
    Game(std::shared_ptr<Coordinator> _coordinator, sf::RenderWindow &_window);
    /**
     * @brief Destroy the Game object
     * 
     */
    ~Game();
    /**
     * @brief Start the game loop
     * 
     */
    void startGame();
private:
    /**
     * @brief boolean to know if it is called by server or client
     * 
     */
    bool game;
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
    sf::RenderWindow &window;
    std::shared_ptr<RenderSprite> renderSprite;
    /**
     * @brief pointer to Movement
     * 
     */
    std::shared_ptr<Movement> movement;
    /**
     * @brief pointer to PlayerInput
     * 
     */
    std::shared_ptr<PlayerInput> playerInput;
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
     * @brief pointer to RenderParallax
     * 
     */
    std::shared_ptr<RenderParallax> renderParallax;

    /**
     * @brief Initiate all entities
     * 
     */
    void initStartEntity();
    /**
     * @brief Update the state of the game
     * 
     * @param actualTime the current time of the game
     */
    void update(sf::Time actualTime);
    /**
     * @brief Initiate all systems
     * 
     */
    void initSystem();
};

#endif
