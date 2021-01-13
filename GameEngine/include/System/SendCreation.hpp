/*
** EPITECH PROJECT, 2020
** SendCreation.hpp
** File description:
** SendCreation
*/

#ifndef SENDCREATION_HPP_
#define SENDCREATION_HPP_

#include <iostream>
#include <SFML/Graphics.hpp>
#include "Core/System.hpp"
#include "Component/Sprite.hpp"
#include "Component/Transform.hpp"
#include "Component/Velocity.hpp"
#include "Component/Collision.hpp"
#include "Core/Coordinator.hpp"
#include "Server.hpp"

class SendCreation : public System
{

private:
    std::shared_ptr<Coordinator> coordinator;
    std::shared_ptr<Server> server;
public:
    void init(std::shared_ptr<Coordinator> _coordinator,
    std::shared_ptr<Server> _server);
    void Creation();
};

#endif /* !SENDCREATION_HPP_ */
