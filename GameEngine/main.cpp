/*
** EPITECH PROJECT, 2020
** Main.cpp
** File description:
** main
*/

#include <iostream>
#include <fstream>
#include <memory>
#include <SFML/Graphics.hpp>
#include "Game.hpp"
#include "Component/Sprite.hpp"
#include "Component/Transform.hpp"
#include "Core/ComponentManager.hpp"


int main()
{
    std::shared_ptr<Coordinator> coordinator = std::make_shared<Coordinator>();
    sf::RenderWindow window(sf::VideoMode(1280,720), "Game r-type");
    Game game(coordinator, window);

    game.startGame();
    return (0);
}
