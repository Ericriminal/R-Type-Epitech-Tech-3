/*
** EPITECH PROJECT, 2020
** PlayerInput.cpp
** File description:
** PlayerInput
*/

#include <memory>
#include "System/PlayerInput.hpp"
#include "Core/Coordinator.hpp"
#include <SFML/Graphics.hpp>


void PlayerInput::init(std::shared_ptr<EntityArray> lib, std::shared_ptr<Coordinator> _coordinator,
    std::shared_ptr<Client> _client)
{
    test = lib;
    coordinator = _coordinator;
    client = _client;
    shootCooldown = sf::seconds(0.25f);
    actualShootCooldown = sf::seconds(0.25f);
}

void PlayerInput::update(sf::Time actualTime, sf::RenderWindow &_window)
{
    sf::Event event;
    actualShootCooldown += actualTime;
    for (int id : entity) {
        auto speed = coordinator->GetComponent<Velocity>(id);
        DataStream::playerAction package;

        package.id = id;
        package.playerNum = client->myPlayerId;
        package.action = 0;

        while (_window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) {
                package.action = 2;
                _window.close();

            }
            if (event.type == sf::Event::KeyPressed) {
                switch (event.key.code) {
                    case sf::Keyboard::Z:
                        speed->speed.y = -4;
                        break;
                    case sf::Keyboard::S:
                        speed->speed.y = 4;
                        break;
                    case sf::Keyboard::Q:
                        speed->speed.x = -4;
                        break;
                    case sf::Keyboard::D:
                        speed->speed.x = 4;
                        break;
                    case sf::Keyboard::Space:
                        if (actualShootCooldown >= shootCooldown) {
                            package.action = 1;
                            // EntityCreator::createBullet("../ressources/r-typesheet1.gif", id);
                            actualShootCooldown = sf::Time::Zero;
                        }
                        break;
                    default:
                        break;
                }
            } else {
                if (event.key.code == sf::Keyboard::Z || event.key.code == sf::Keyboard::S) {
                    speed->speed.y = 0;
                }
                if (event.key.code == sf::Keyboard::Q || event.key.code == sf::Keyboard::D) {
                    speed->speed.x = 0;
                }
            }
        }
        package.speedX = speed->speed.x;
        package.speedY = speed->speed.y;
        client->send(0, DataStream::DataType::PLAYERACTION, package);
    }
    client->send(0, DataStream::DataType::PING, DataStream::ping{});
}
