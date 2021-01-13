/*
** EPITECH PROJECT, 2020
** SendEntityCreation.hpp
** File description:
** SendEntityCreation
*/

#ifndef SENDENITIYCREATION_HPP_
#define SENDENITIYCREATION_HPP_

#include <iostream>
#include "Core/System.hpp"
#include "Component/Sprite.hpp"
#include "Component/Transform.hpp"
#include "Component/Velocity.hpp"
#include "Component/Collision.hpp"
#include "Entity/EntityArray.hpp"
#include "Core/Coordinator.hpp"
#include "Server.hpp"
#include <memory>

class SendEntityCreation : public System
{
private:
    std::shared_ptr<Coordinator> coordinator;
    std::shared_ptr<Server> server;

public:
    void init(std::shared_ptr<Coordinator> _coordinator,
        std::shared_ptr<Server> _server);
    void update(DataStream::creation creation);
};

#endif /* !SENDENITIYCREATION_HPP_ */
