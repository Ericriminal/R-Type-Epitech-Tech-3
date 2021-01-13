/*
** EPITECH PROJECT, 2020
** RenderSprite.hpp
** File description:
** RenderSprite
*/
#ifndef GETALLPOS_HPP
#define GETALLPOS_HPP

#include <iostream>
#include "Core/System.hpp"
#include "Component/Sprite.hpp"
#include "Component/Transform.hpp"
#include "Component/Velocity.hpp"
#include "Component/Collision.hpp"
#include "Core/Coordinator.hpp"
#include "Client.hpp"
#include "Entity/EntityArray.hpp"

class GetAllPos : public System
{
private:
    std::shared_ptr<Coordinator> coordinator;
    std::shared_ptr<Client> client;
    std::shared_ptr<EntityArray> test;
public:
    void init(std::shared_ptr<Coordinator> _coordinator,
        std::shared_ptr<Client> _client, std::shared_ptr<EntityArray> _test);
    void update();
};

#endif /* !SENDALLDATA_HPP */
