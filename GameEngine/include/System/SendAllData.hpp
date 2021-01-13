/*
** EPITECH PROJECT, 2020
** RenderSprite.hpp
** File description:
** RenderSprite
*/
#ifndef SENDALLDATA_HPP
#define SENDALLDATA_HPP

#include <iostream>
#include "Core/System.hpp"
#include "Component/Sprite.hpp"
#include "Component/Transform.hpp"
#include "Component/Velocity.hpp"
#include "Component/Collision.hpp"
#include "Core/Coordinator.hpp"
#include "Server.hpp"

class SendAllData : public System
{
private:
    std::shared_ptr<Coordinator> coordinator;
    std::shared_ptr<Server> server;
public:
    void init(std::shared_ptr<Coordinator> _coordinator,
        std::shared_ptr<Server> _server);
    void update();
};

#endif /* !SENDALLDATA_HPP */
