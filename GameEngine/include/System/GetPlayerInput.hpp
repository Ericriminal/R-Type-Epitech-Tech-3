/*
** EPITECH PROJECT, 2020
** RenderSprite.hpp
** File description:
** RenderSprite
*/
#ifndef GETPLAYERINPUT_HPP
#define GETPLAYERINPUT_HPP

#include <iostream>
#include "Core/System.hpp"
#include "Component/Sprite.hpp"
#include "Component/Transform.hpp"
#include "Component/Velocity.hpp"
#include "Component/Collision.hpp"
#include "Entity/EntityArray.hpp"
#include "System/SendEntityCreation.hpp"
#include "Core/Coordinator.hpp"
#include "Server.hpp"

class GetPlayerInput : public System
{
private:
    std::shared_ptr<Coordinator> coordinator;
    std::shared_ptr<Server> server;
    bool game = true;
    std::shared_ptr<EntityArray> test;
    std::shared_ptr<SendEntityCreation> entityCreate;
    void updatePlayerMove(std::mutex &mutex);
    void newPlayerConnection(std::mutex &mutex);
public:
    void init(std::shared_ptr<Coordinator> _coordinator,
        std::shared_ptr<Server> _server, std::shared_ptr<EntityArray> _lib,
        std::shared_ptr<SendEntityCreation> _entityCreate);
    void update(std::mutex &mutex);
    std::thread runThread(std::mutex &mutex);
};

#endif /* !GETPLAYERINPUT_HPP */
