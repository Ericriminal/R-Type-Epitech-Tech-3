/*
** EPITECH PROJECT, 2020
** SendEntityCreation.cpp
** File description:
** SendCreation
*/

#include "System/SendEntityCreation.hpp"

void SendEntityCreation::init(std::shared_ptr<Coordinator> _coordinator,
    std::shared_ptr<Server> _server)
{
    coordinator = _coordinator;
    server = _server;
}

void SendEntityCreation::update(DataStream::creation creation)
{
    DataStream::creation test = creation;
    this->server->send(0, DataStream::DataType::CREATION, test);
}
