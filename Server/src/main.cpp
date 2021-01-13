/*
** EPITECH PROJECT, 2020
** main.cpp
** File description:
** main for the server of R-type
*/

#include <iostream>
#include "Server.hpp"
#include "GameServer.hpp"
#include "Core/Coordinator.hpp"

int main(int ac, char **av)
{
    std::vector<std::string> _test;
    _test.push_back(av[1]);
    _test.push_back(av[2]);
    _test.push_back(av[3]);
    // Server server(_test);

    // server.run();

    std::shared_ptr<Coordinator> coordinator = std::make_shared<Coordinator>();
    std::shared_ptr<Server> server = std::make_shared<Server>(_test);

    std::cout << "let's go " << std::endl;
    Game game(coordinator, server);

    game.startGame();
    return (0);
}