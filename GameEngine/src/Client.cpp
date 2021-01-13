/*
** EPITECH PROJECT, 2020
** Client.cpp
** File description:
** client
*/

#include "Client.hpp"
// #include "../include/Entity/Player.hpp"

Client::Client(const std::string &windowTitle) : window(sf::VideoMode(800, 600), windowTitle)
{
}

Client::~Client()
{
}

void Client::run()
{
    sf::Clock clock;
    // Player player(sf::Vector2f(50, 50));
    size_t currentTotal = clock.getElapsedTime().asMicroseconds();
    size_t lastTotal = clock.getElapsedTime().asMicroseconds();

    while (this->window.isOpen())
    {
        sf::Event event;
        currentTotal = clock.getElapsedTime().asMicroseconds();
        clock.restart();
        while (this->window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                this->window.close();
            // player.move();
        }
        this->window.clear();
        // player.draw(this->window);
        this->window.display();
    }
}
