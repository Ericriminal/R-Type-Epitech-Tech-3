/*
** EPITECH PROJECT, 2020
** Player.cpp
** File description:
** player
*/

#include "Core/Coordinator.hpp"
#include "Component/Sprite.hpp"
#include "Component/Transform.hpp"
#include "Component/Velocity.hpp"
#include "Component/Collision.hpp"

// extern "C" Player *create(const std::string &texturePath, sf::Vector2f pos)
// {
//   return new Player(texturePath, pos);
// }

extern "C" void createEntity(const std::string &texturePath, sf::Vector2f pos, std::shared_ptr<Coordinator> coordinator,
    int _entity)
{
    int entity = coordinator->CreateEntity(_entity, Tag::PLAYER);

    coordinator->AddComponent<Transform>(entity, std::make_shared<Transform>(pos, sf::Vector2<float>(3, 4), 4.5));
    sf::Texture texture;
    texture.loadFromFile(texturePath, sf::IntRect(100, 0, 32, 20));
    sf::Sprite sprite;
    sprite.setPosition(pos);
    coordinator->AddComponent<Sprite>(entity, std::make_shared<Sprite>(texturePath, texture, sprite));
    // auto &test = coordinator.GetComponent<Sprite>(entity);
    // test.sprite.setTexture(test.texture);
    coordinator->AddComponent<Velocity>(entity, std::make_shared<Velocity>(sf::Vector2<float>(0, 0), 0));
}

// Player::Player(const std::string &texturePath, sf::Vector2f pos)
// {
//     int entity = coordinator.CreateEntity(Tag::PLAYER);
//
//     coordinator.AddComponent<Transform>(entity, {pos, sf::Vector2<float>(3, 4), 4.5});
//     sf::Texture texture;
//     texture.loadFromFile(texturePath, sf::IntRect(100, 0, 32, 20));
//     sf::Sprite sprite;
//     sprite.setPosition(pos);
//     coordinator.AddComponent<Sprite>(entity, {texturePath, texture, sprite});
//     // auto &test = coordinator.GetComponent<Sprite>(entity);
//     // test.sprite.setTexture(test.texture);
//     coordinator.AddComponent<Velocity>(entity, {sf::Vector2<float>(0, 0), 0});
//     coordinator.AddComponent<Collision>(entity, {coordinator.GetComponent<Sprite>(entity).sprite.getGlobalBounds()});
// }
