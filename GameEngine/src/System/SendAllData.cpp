/*
** EPITECH PROJECT, 2020
** Sprite.cpp
** File description:
** Sprite
*/

#include <memory>
#include "System/SendAllData.hpp"

void SendAllData::init(std::shared_ptr<Coordinator> _coordinator,
    std::shared_ptr<Server> _server)
{
    coordinator = _coordinator;
    server = _server;
}

void SendAllData::update()
{
    //loop on all player connected
    for (int count = 0; count < server->getSocketsSize(); count++) {
    for (int id : entity) {
        auto transform = coordinator->GetComponent<Transform>(id);
        this->server->send(count, DataStream::DataType::POSITION, DataStream::position{id, transform->position.x, transform->position.y});
    }
    this->server->send(count, DataStream::DataType::PING, DataStream::ping{});
    }
}
