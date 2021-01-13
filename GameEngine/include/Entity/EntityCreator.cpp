/*
** EPITECH PROJECT, 2020
** EntityCreator.cpp
** File description:
** EntityCreator
*/

#include "Entity/EntityCreator.hpp"

extern Coordinator coordinator;

namespace EntityCreator
{
    // extern "C" void createPlayer(const std::string &texturePath, sf::Vector2f pos)
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

    void test(const std::string &texturePath, sf::Vector2f pos)
    {
        int entity = coordinator.CreateEntity(Tag::PLAYER);

        // coordinator.AddComponent<Transform>(entity, {pos, sf::Vector2<float>(5, 5), 4.5});
        sf::Texture texture;
        texture.loadFromFile(texturePath);
        sf::Sprite sprite;
        sprite.setPosition(pos);
        std::shared_ptr<Sprite> spriteComponent = std::make_shared<Sprite>(texturePath, texture, sprite);
        coordinator.AddComponent<Sprite>(entity, spriteComponent);
    }

    // void createBackgroundSpace(const std::string &texturePath, sf::Vector2f pos)
    // {
    //     int entity = coordinator.CreateEntity(Tag::PARALLAX);

    //     coordinator.AddComponent<Transform>(entity, {pos, sf::Vector2<float>(5, 5), 4.5});
    //     std::shared_ptr<sf::Texture> texture = std::make_shared<sf::Texture>();
    //     texture->loadFromFile(texturePath);
    //     std::shared_ptr<sf::Sprite> sprite = std::make_shared<sf::Sprite>();
    //     sprite->setPosition(pos);
    //     coordinator.AddComponent<Sprite>(entity, {texturePath, texture, sprite});
    //     coordinator.AddComponent<Velocity>(entity, {sf::Vector2<float>(0, 0), 0});
    // }

    // void createBackgroundFarPlanet(const std::string &texturePath, sf::Vector2f pos)
    // {
    //     int entity = coordinator.CreateEntity(Tag::PARALLAX);

    //     coordinator.AddComponent<Transform>(entity, {pos, sf::Vector2<float>(1, 1), 4.5});
    //     std::shared_ptr<sf::Texture> texture = std::make_shared<sf::Texture>();
    //     texture->loadFromFile(texturePath);
    //     std::shared_ptr<sf::Sprite> sprite = std::make_shared<sf::Sprite>();
    //     sprite->setPosition(pos);
    //     coordinator.AddComponent<Sprite>(entity, {texturePath, texture, sprite});
    //     coordinator.AddComponent<Velocity>(entity, {sf::Vector2<float>(-0.1, 0), 0});
    // }

    // void createBackgroundStars(const std::string &texturePath, sf::Vector2f pos)
    // {
    //     int entity = coordinator.CreateEntity(Tag::PARALLAX);

    //     coordinator.AddComponent<Transform>(entity, {pos, sf::Vector2<float>(2, 2), 4.5});
    //     std::shared_ptr<sf::Texture> texture = std::make_shared<sf::Texture>();
    //     texture->loadFromFile(texturePath);
    //     std::shared_ptr<sf::Sprite> sprite = std::make_shared<sf::Sprite>();
    //     sprite->setPosition(pos);
    //     coordinator.AddComponent<Sprite>(entity, {texturePath, texture, sprite});
    //     coordinator.AddComponent<Velocity>(entity, {sf::Vector2<float>(-0.3, 0), 0});
    // }

    // void createBackgroundBigPlanet(const std::string &texturePath, sf::Vector2f pos)
    // {
    //     int entity = coordinator.CreateEntity(Tag::PARALLAX);

    //     coordinator.AddComponent<Transform>(entity, {pos, sf::Vector2<float>(2, 2), 4.5});
    //     std::shared_ptr<sf::Texture> texture = std::make_shared<sf::Texture>();
    //     texture->loadFromFile(texturePath);
    //     std::shared_ptr<sf::Sprite> sprite = std::make_shared<sf::Sprite>();
    //     sprite->setPosition(pos);
    //     coordinator.AddComponent<Sprite>(entity, {texturePath, texture, sprite});
    //     coordinator.AddComponent<Velocity>(entity, {sf::Vector2<float>(-1, 0), 0});
    // }

    // void createBackgroundPlanetRing(const std::string &texturePath, sf::Vector2f pos)
    // {
    //     int entity = coordinator.CreateEntity(Tag::PARALLAX);

    //     coordinator.AddComponent<Transform>(entity, {pos, sf::Vector2<float>(2, 2), 4.5});
    //     std::shared_ptr<sf::Texture> texture = std::make_shared<sf::Texture>();
    //     texture->loadFromFile(texturePath);
    //     std::shared_ptr<sf::Sprite> sprite = std::make_shared<sf::Sprite>();
    //     sprite->setPosition(pos);
    //     coordinator.AddComponent<Sprite>(entity, {texturePath, texture, sprite});
    //     coordinator.AddComponent<Velocity>(entity, {sf::Vector2<float>(-0.6, 0), 0});
    // }

    // void createBullet(const std::string &texturePath, int playerID)
    // {
    //     int entity = coordinator.CreateEntity(Tag::BULLET);
    //     sf::Vector2<float> bullet_pos = coordinator.GetComponent<Transform>(playerID).position;

    //     coordinator.AddComponent<Transform>(entity, {sf::Vector2<float>(bullet_pos.x+30, bullet_pos.y), sf::Vector2<float>(3, 4), 4.5});
    //     std::shared_ptr<sf::Texture> texture = std::make_shared<sf::Texture>();
    //     texture->loadFromFile(texturePath, sf::IntRect(160, 130, 55, 20));
    //     std::shared_ptr<sf::Sprite> sprite = std::make_shared<sf::Sprite>();
    //     sprite->setTexture(* texture.get());
    //     sprite->setPosition(bullet_pos);
    //     coordinator.AddComponent<Sprite>(entity, {texturePath, texture, sprite});
    //     coordinator.AddComponent<Velocity>(entity, {sf::Vector2<float>(10, 0), 0});
    //     coordinator.AddComponent<Collision>(entity, {coordinator.GetComponent<Sprite>(entity).sprite->getGlobalBounds()});
    // }

    // void createEnemyBullet(const std::string &texturePath, int enemyID)
    // {
    //     int entity = coordinator.CreateEntity(Tag::ENEMY_BULLET);
    //     sf::Vector2<float> bullet_pos = coordinator.GetComponent<Transform>(enemyID).position;

    //     coordinator.AddComponent<Transform>(entity, {sf::Vector2<float>(bullet_pos.x-55, bullet_pos.y), sf::Vector2<float>(3, 4), 4.5});
    //     std::shared_ptr<sf::Texture> texture = std::make_shared<sf::Texture>();
    //     texture->loadFromFile(texturePath, sf::IntRect(315, 130, 55, 20));
    //     std::shared_ptr<sf::Sprite> sprite = std::make_shared<sf::Sprite>();
    //     sprite->setTexture(* texture.get());
    //     sprite->setPosition(bullet_pos);
    //     coordinator.AddComponent<Sprite>(entity, {texturePath, texture, sprite});
    //     coordinator.AddComponent<Velocity>(entity, {sf::Vector2<float>(-10, 0), 0});
    //     coordinator.AddComponent<Collision>(entity, {coordinator.GetComponent<Sprite>(entity).sprite->getGlobalBounds()});
    // }

    // void createEnemy(const std::string &texturePath, sf::Vector2f pos)
    // {
    //     int entity = coordinator.CreateEntity(Tag::ENEMY);

    //     coordinator.AddComponent<Transform>(entity, {pos, sf::Vector2<float>(3, 4), 4.5});
    //     std::shared_ptr<sf::Texture> texture = std::make_shared<sf::Texture>();
    //     texture->loadFromFile(texturePath,sf::IntRect(100, 0, 32, 20));
    //     std::shared_ptr<sf::Sprite> sprite = std::make_shared<sf::Sprite>();
    //     sprite->setTexture(* texture.get());
    //     sprite->setPosition(pos);
    //     coordinator.AddComponent<Sprite>(entity, {texturePath, texture, sprite});
    //     coordinator.AddComponent<Velocity>(entity, {sf::Vector2<float>(-2, 5), 0});
    //     coordinator.AddComponent<Collision>(entity, {coordinator.GetComponent<Sprite>(entity).sprite->getGlobalBounds()});
    // }
}
