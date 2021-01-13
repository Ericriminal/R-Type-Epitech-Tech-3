/*
** EPITECH PROJECT, 2020
** game.cpp
** File description:
** game
*/

#include <random>
#include "GameClient.hpp"
#include "Entity/EntityCreator.hpp"
#include <dlfcn.h>
#include <iostream>

extern "C" typedef void (*hello_t)( const char* text );

Game::Game(std::shared_ptr<Coordinator> _coordinator,
    std::shared_ptr<Client> _client, sf::RenderWindow &_window)
: coordinator(_coordinator), client(_client), window(_window)
{
    game = true;
    test = std::make_shared<EntityArray>("./lib/");
    lastPackageType = -1;

    // coordinator->window.setKeyRepeatEnabled(false);
    coordinator->RegisterComponent<Sprite>();
    coordinator->RegisterComponent<Transform>();
    coordinator->RegisterComponent<Velocity>();

    renderSprite = coordinator->RegisterSystem<RenderSprite>();
    renderParallax = coordinator->RegisterSystem<RenderParallax>();
    playerInput = coordinator->RegisterSystem<PlayerInput>();
    getServerPos = coordinator->RegisterSystem<GetAllPos>();

    // //Player
    coordinator->AddSystemTag<RenderSprite>(Tag::PLAYER);
    coordinator->AddSystemTag<PlayerInput>(Tag::PLAYER);

    // //Enemy Bullet
    coordinator->AddSystemTag<RenderSprite>(Tag::ENEMY_BULLET);

    // //Bullet
    coordinator->AddSystemTag<RenderSprite>(Tag::BULLET);

    // //Enemy
    coordinator->AddSystemTag<RenderSprite>(Tag::ENEMY);

    // //Parallax
    coordinator->AddSystemTag<RenderParallax>(Tag::PARALLAX);
}

Game::~Game()
{
}

void Game::firstObjects()
{
    int type = 0;

    type = this->client->getId();
    while (type == DataStream::DataType::CREATION) {
        std::cout << "creating" << std::endl;
        DataStream::creation data = this->client->getData<DataStream::creation>();
        std::cout << data.id << " " << data.entityToCreate << std::endl;
        switch (data.entityToCreate)
        {
        case 1:
            test->entities["libBackgroundSpace.so"]("../ressources/parallax-space-background.png",
                sf::Vector2<float>(0, 0), coordinator, data.id);
            break;
        case 2:
            test->entities["libBackgroundFarPlanet.so"]("../ressources/parallax-space-far-planets.png",
                sf::Vector2<float>(data.x, data.y), coordinator, data.id);
            break;
        case 3:
            test->entities["libBackgroundPlanetRing.so"]("../ressources/parallax-space-ring-planet.png",
                sf::Vector2<float>(data.x, data.y), coordinator, data.id);
            break;
        case 4:
            test->entities["libBackgroundBigPlanet.so"]("../ressources/parallax-space-big-planet.png",
                sf::Vector2<float>(data.x, data.y), coordinator, data.id);
            break;
        case 5:
             test->entities["libBackgroundStars.so"]("../ressources/parallax-space-stars.png",
                sf::Vector2<float>(data.x, data.y), coordinator, data.id);
            break;
        case 6:
            test->entities["libPlayer.so"]("../ressources/r-typesheet1.gif",
                sf::Vector2<float>(data.x, data.y), coordinator, data.id);
            break;
        case 7:
            test->entities["libBullet.so"]("../ressources/r-typesheet1.gif",
                sf::Vector2<float>(data.x, data.y), coordinator, data.id);
        default:
            break;
        }
        type = this->client->getId();
    }
    this->lastPackageType = type;
}

void Game::startGame()
{
    this->firstObjects();
    this->initSystem();
    sf::Clock clock;
    sf::Time actualTime = sf::Time::Zero;
    sf::Time timePerFrame = sf::seconds(1.f / 120.f);
    std::cout << "dab" << std::endl;

    // Set player connection

    while (window.isOpen()) {
        actualTime += clock.restart();
        while (actualTime > timePerFrame) {
            window.clear();
            this->update(actualTime);
            window.display();
            actualTime -= timePerFrame;
            // this->sendAllData();
        }
    }
}

void Game::initSystem()
{
    playerInput->init(test, coordinator, client);
    getServerPos->init(coordinator, client, test);
    renderParallax->init(coordinator);
    renderSprite->init(coordinator);
}

void Game::update(sf::Time actualTime)
{
    playerInput->update(actualTime, window);
    getServerPos->update();
    renderParallax->update(window);
    renderSprite->update(window);
}
