/*
** EPITECH PROJECT, 2020
** Enemy.cpp
** File description:
** Enemy
*/

#include "Core/Coordinator.hpp"
#include "Component/Sprite.hpp"
#include "Component/Transform.hpp"
#include "Component/Velocity.hpp"
#include "Component/Collision.hpp"

/**
 * @brief Create a Entity object
 * 
 * @param texturePath the path to the texture of the entity
 * @param pos the position (x and y) of the entity
 * @param coordinator coordinator
 */
extern "C" int createEntity(const std::string &texturePath, sf::Vector2f pos, std::shared_ptr<Coordinator> coordinator,
    int entityId)
{
    int entity = coordinator->CreateEntity(entityId, Tag::ENEMY);

    coordinator->AddComponent<Transform>(entity, std::make_shared<Transform>(pos, sf::Vector2<float>(3, 4), 4.5));
    sf::Texture texture;
    texture.loadFromFile(texturePath,sf::IntRect(100, 0, 32, 20));
    sf::Sprite sprite;
    sprite.setTexture(texture);
    sprite.setPosition(pos);
    coordinator->AddComponent<Sprite>(entity, std::make_shared<Sprite>(texturePath, texture, sprite));
    coordinator->AddComponent<Velocity>(entity, std::make_shared<Velocity>(sf::Vector2<float>(-2, 5), 0));
    coordinator->AddComponent<Collision>(entity, std::make_shared<Collision>(coordinator->GetComponent<Sprite>(entity)->sprite.getGlobalBounds()));
    return (entity);
}