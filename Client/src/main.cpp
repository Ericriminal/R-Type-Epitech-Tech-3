/*
** EPITECH PROJECT, 2020
** main
** File description:
** main for the client of rtype
*/

#include <iostream>
#include <string>
#include "Client.hpp"
#include "GameClient.hpp"
#include "Core/Coordinator.hpp"


int main(int ac, char **av)
{
    std::vector<std::string> _test;
    _test.push_back(av[1]);
    _test.push_back(av[2]);
    _test.push_back(av[3]);
    _test.push_back(av[4]);
    // Client client(_test);

    // client.run(std::stoi(av[5]));

    std::shared_ptr<Coordinator> coordinator = std::make_shared<Coordinator>();
    std::shared_ptr<Client> client = std::make_shared<Client>(_test);

    client->connectToServer(std::stoi(av[5]));
    sf::RenderWindow window(sf::VideoMode(1280,720), "Client r-type");

    Game game(coordinator, client, window);

    game.startGame();
    return (0);
}