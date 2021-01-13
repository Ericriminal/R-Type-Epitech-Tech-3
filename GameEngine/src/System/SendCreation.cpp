/*
** EPITECH PROJECT, 2020
** SendCreation.cpp
** File description:
** SendCreation
*/

#include <memory>
#include "System/SendCreation.hpp"


void SendCreation::init(std::shared_ptr<Coordinator> _coordinator,
    std::shared_ptr<Server> _server)
{
    coordinator = _coordinator;
    server = _server;
}

void SendCreation::Creation()
{
    //loop on all player connected
    int EntitytoCreate = 1;
    for (int id : entity) {
        auto transform = coordinator->GetComponent<Transform>(id);
        this->server->send(0, DataStream::DataType::CREATION, 
        DataStream::creation{id, EntitytoCreate, transform->position.x, transform->position.y});
        EntitytoCreate++;
    }
    this->server->send(0, DataStream::DataType::PING, DataStream::ping{});
}
