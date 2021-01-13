/*
** EPITECH PROJECT, 2020
** EntityCreator.hpp
** File description:
** EntityCreator
*/

#ifndef ENTITY_CREATOR_HPP
#define ENTITY_CREATOR_HPP

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

namespace EntityCreator
{
    // void createPlayer(const std::string &texturePath, sf::Vector2f pos);
    void createEnemy(const std::string &texturePath, sf::Vector2f pos);
    void createBullet(const std::string &texturePath, int playerId);
    void createBackgroundSpace(const std::string &texturePath, sf::Vector2f pos);
    void createBackgroundFarPlanet(const std::string &texturePath, sf::Vector2f pos);
    void createBackgroundStars(const std::string &texturePath, sf::Vector2f pos);
    void createBackgroundBigPlanet(const std::string &texturePath, sf::Vector2f pos);
    void createBackgroundPlanetRing(const std::string &texturePath, sf::Vector2f pos);
    void createEnemyBullet(const std::string &texturePath, int enemyID);
    void test(const std::string &texturePath, sf::Vector2f pos);

}

#endif
