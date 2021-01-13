/*
** EPITECH PROJECT, 2020
** Sprite.cpp
** File description:
** Sprite
*/

#include <memory>
#include "System/GetAllPos.hpp"

void GetAllPos::init(std::shared_ptr<Coordinator> _coordinator,
    std::shared_ptr<Client> _client, std::shared_ptr<EntityArray> _test)
{
    coordinator = _coordinator;
    client = _client;
    test = _test;
}

void GetAllPos::update()
{
    //loop on all player connected
    int type = 0;

    type = this->client->getId();
    while (type == DataStream::DataType::POSITION) {
        // std::cout << "updating position" << std::endl;
        DataStream::position data = this->client->getData<DataStream::position>();
        
        auto transform = coordinator->GetComponent<Transform>(data.id);
        transform->position.x = data.x;
        transform->position.y = data.y;
        type = this->client->getId();
    }
    if (type == DataStream::DataType::CREATION) {
        DataStream::creation data = this->client->getData<DataStream::creation>();
        switch (data.entityToCreate)
        {
        case 1:
            test->entities["libBackgroundSpace.so"]("../ressources/parallax-space-background.png",
                sf::Vector2<float>(0, 0), coordinator, data.id);
            break;
        case 2:
            test->entities["libBackgroundFarPlanet.so"]("../ressources/parallax-space-far-planets.png",
                sf::Vector2<float>(data.x, data.y), coordinator, data.id);
            break;
        case 3:
            test->entities["libBackgroundPlanetRing.so"]("../ressources/parallax-space-ring-planet.png",
                sf::Vector2<float>(data.x, data.y), coordinator, data.id);
            break;
        case 4:
            test->entities["libBackgroundBigPlanet.so"]("../ressources/parallax-space-big-planet.png",
                sf::Vector2<float>(data.x, data.y), coordinator, data.id);
            break;
        case 5:
             test->entities["libBackgroundStars.so"]("../ressources/parallax-space-stars.png",
                sf::Vector2<float>(data.x, data.y), coordinator, data.id);
            break;
        case 6:
            test->entities["libPlayer.so"]("../ressources/r-typesheet1.gif",
                sf::Vector2<float>(data.x, data.y), coordinator, data.id);
            break;
        case 7:
            test->entities["libBullet.so"]("../ressources/r-typesheet1.gif",
                sf::Vector2<float>(data.x, data.y), coordinator, data.id);
            break;
        default:
            break;
        }
    }
}
