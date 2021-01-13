/*
** EPITECH PROJECT, 2020
** SendCreation.cpp
** File description:
** SendCreation
*/

#include <memory>
#include "System/GetPlayerInput.hpp"
#include <thread>
#include <chrono>

void GetPlayerInput::init(std::shared_ptr<Coordinator> _coordinator,
    std::shared_ptr<Server> _server, std::shared_ptr<EntityArray> _lib, std::shared_ptr<SendEntityCreation> _entityCreate)
{
    coordinator = _coordinator;
    server = _server;
    test = _lib;
    entityCreate = _entityCreate;
    game = true;
}

std::thread GetPlayerInput::runThread(std::mutex &mutex)
{
    std::thread thread(&GetPlayerInput::update, this, std::ref(mutex));

    return thread;
}

void GetPlayerInput::updatePlayerMove(std::mutex &mutex)
{
    mutex.lock();

    DataStream::playerAction dataPlayerAction = this->server->getData<DataStream::playerAction>();

    auto velocity = coordinator->GetComponent<Velocity>(dataPlayerAction.id);
    velocity->speed.x = dataPlayerAction.speedX;
    velocity->speed.y = dataPlayerAction.speedY;
    if (dataPlayerAction.action == 1) {
        DataStream::creation newBullet;
        auto transform = coordinator->GetComponent<Transform>(dataPlayerAction.id);

        newBullet.id = test->entities["libBullet.so"]("../ressources/r-typesheet1.gif",
        sf::Vector2<float>(transform->position.x, transform->position.y), coordinator, -1);
        newBullet.entityToCreate = 7;
        newBullet.x = transform->position.x;
        newBullet.y = transform->position.y;
        std::cout << "boom la bullet" << std::endl;
        entityCreate->update(newBullet);
    }
    if (dataPlayerAction.action == 2) {
        server->destroySocket(dataPlayerAction.playerNum);
        if (server->getSocketsSize() == 0)
            game = false;
    }
    mutex.unlock();
}

void GetPlayerInput::newPlayerConnection(std::mutex &mutex)
{
    std::cout << "oof" << std::endl;
    mutex.lock();

    std::cout << "dab" << std::endl;
    DataStream::connection dataConnection = server->getData<DataStream::connection>();
    std::cout << dataConnection.clientIp << std::endl;
    std::string clientIp;
    for (int count = 0; count < dataConnection.clientIp[count] != '\0'; count++)
        clientIp.push_back(dataConnection.clientIp[count]);
    std::string port;
    for (int count = 0; count < dataConnection.port[count] != '\0'; count++)
        port.push_back(dataConnection.port[count]);
    std::vector<std::string> ip;
    ip.push_back(clientIp);
    ip.push_back(port);
    server->createNewSocket(ip);
    int playerNum = server->getSocketsSize() - 1;
    server->send(playerNum, DataStream::DataType::CONNECTED, DataStream::connected{playerNum});

    mutex.unlock();
}

void GetPlayerInput::update(std::mutex &mutex)
{
    int type = 0;
    int playerNum = server->getSocketsSize();
    int tmp = 0;
 
    while (game) {
        type = this->server->getId();
        switch (type)
        {
        case DataStream::DataType::PLAYERACTION:
            this->updatePlayerMove(mutex);                
            break;
        case DataStream::DataType::CONNECTION:
            if (tmp > 1000) {
                this->newPlayerConnection(mutex);
            } else
                 tmp++;
        default:
            break;
        }
    }
}
