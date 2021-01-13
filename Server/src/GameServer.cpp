/*
** EPITECH PROJECT, 2020
** game.cpp
** File description:
** game
*/

#include <random>
#include "GameServer.hpp"
#include <dlfcn.h>
#include <iostream>

Game::Game(std::shared_ptr<Coordinator> _coordinator,
    std::shared_ptr<Server> _server)
: coordinator(_coordinator), server(_server)
{
    game = true;
    test = std::make_shared<EntityArray>("./lib/");

    // coordinator->window.setKeyRepeatEnabled(false);
    coordinator->RegisterComponent<Sprite>();
    coordinator->RegisterComponent<Transform>();
    coordinator->RegisterComponent<Velocity>();
    coordinator->RegisterComponent<Collision>();

    // renderSprite = coordinator->RegisterSystem<RenderSprite>();
    // renderParallax = coordinator->RegisterSystem<RenderParallax>();
    movement = coordinator->RegisterSystem<Movement>();
    // playerInput = coordinator->RegisterSystem<PlayerInput>();
    collision = coordinator->RegisterSystem<Collide>();
    bulletHandler = coordinator->RegisterSystem<BulletHandler>();
    enemyShoot = coordinator->RegisterSystem<Shoot>();
    creation = coordinator->RegisterSystem<SendCreation>();
    sendDataPos = coordinator->RegisterSystem<SendAllData>();
    getPlayerInput = coordinator->RegisterSystem<GetPlayerInput>();
    entityCreate = coordinator->RegisterSystem<SendEntityCreation>();
    
    // //Player
    // coordinator->AddSystemTag<RenderSprite>(Tag::PLAYER);
    coordinator->AddSystemTag<Movement>(Tag::PLAYER);
    // coordinator->AddSystemTag<PlayerInput>(Tag::PLAYER);
    coordinator->AddSystemTag<Collide>(Tag::PLAYER);
    coordinator->AddSystemTag<SendAllData>(Tag::PLAYER);
    coordinator->AddSystemTag<GetPlayerInput>(Tag::PLAYER);
    coordinator->AddSystemTag<SendCreation>(Tag::PLAYER);

    // //Enemy Bullet
    // coordinator->AddSystemTag<RenderSprite>(Tag::ENEMY_BULLET);
    coordinator->AddSystemTag<Movement>(Tag::ENEMY_BULLET);
    coordinator->AddSystemTag<Collide>(Tag::ENEMY_BULLET);
    coordinator->AddSystemTag<BulletHandler>(Tag::ENEMY_BULLET);

    // //Bullet
    // coordinator->AddSystemTag<RenderSprite>(Tag::BULLET);
    coordinator->AddSystemTag<Movement>(Tag::BULLET);
    coordinator->AddSystemTag<Collide>(Tag::BULLET);
    coordinator->AddSystemTag<BulletHandler>(Tag::BULLET);
    coordinator->AddSystemTag<SendCreation>(Tag::BULLET);
    coordinator->AddSystemTag<SendAllData>(Tag::BULLET);
    coordinator->AddSystemTag<SendEntityCreation>(Tag::BULLET);
    

    // //Enemy
    // coordinator->AddSystemTag<RenderSprite>(Tag::ENEMY);
    coordinator->AddSystemTag<Collide>(Tag::ENEMY);
    coordinator->AddSystemTag<Movement>(Tag::ENEMY);
    coordinator->AddSystemTag<Shoot>(Tag::ENEMY);

    // //Parallax
    // coordinator->AddSystemTag<RenderParallax>(Tag::PARALLAX);
    coordinator->AddSystemTag<Movement>(Tag::PARALLAX);
    coordinator->AddSystemTag<SendCreation>(Tag::PARALLAX);
    coordinator->AddSystemTag<SendAllData>(Tag::PARALLAX);
}

Game::~Game()
{
}

void Game::initStartEntity()
{
    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution(0, 600);

    test->entities["libBackgroundSpace.so"]("../ressources/parallax-space-background.png",
        sf::Vector2<float>(0, 0), coordinator, -1);
    test->entities["libBackgroundFarPlanet.so"]("../ressources/parallax-space-far-planets.png",
        sf::Vector2<float>(1280, distribution(generator)), coordinator, -1);
    test->entities["libBackgroundPlanetRing.so"]("../ressources/parallax-space-ring-planet.png",
        sf::Vector2<float>(1280, distribution(generator)), coordinator, -1);
    test->entities["libBackgroundBigPlanet.so"]("../ressources/parallax-space-big-planet.png",
        sf::Vector2<float>(1280, distribution(generator)), coordinator, -1);
    test->entities["libBackgroundStars.so"]("../ressources/parallax-space-stars.png",
        sf::Vector2<float>(0, 0), coordinator, -1);
    test->entities["libPlayer.so"]("../ressources/r-typesheet1.gif",
        sf::Vector2<float>(0, 0), coordinator, -1);
    creation->Creation();
    // EntityCreator::createBackgroundSpace("../ressources/parallax-space-background.png", sf::Vector2<float>(0, 0));
    // EntityCreator::createBackgroundFarPlanet("../ressources/parallax-space-far-planets.png", sf::Vector2<float>(1280, distribution(generator)));
    // EntityCreator::createBackgroundStars("../ressources/parallax-space-stars.png", sf::Vector2<float>(1500, distribution(generator)));
    // EntityCreator::createBackgroundStars("../ressources/parallax-space-stars.png", sf::Vector2<float>(1000, distribution(generator)));
    // EntityCreator::createBackgroundBigPlanet("../ressources/parallax-space-big-planet.png", sf::Vector2<float>(500, distribution(generator)));
    // EntityCreator::createBackgroundPlanetRing("../ressources/parallax-space-ring-planet.png", sf::Vector2<float>(1280, distribution(generator)));

}

void Game::connectFirstPlayer()
{
    int type = server->getId();

    if (type == DataStream::DataType::CONNECTION) {
        DataStream::connection data = server->getData<DataStream::connection>();
        std::string clientIp;
        for (int count = 0; count < data.clientIp[count] != '\0'; count++)
            clientIp.push_back(data.clientIp[count]);
        std::string port;
        for (int count = 0; count < data.port[count] != '\0'; count++)
            port.push_back(data.port[count]);
        std::vector<std::string> ip;
        ip.push_back(clientIp);
        ip.push_back(port);
        server->createNewSocket(ip);
        server->send(0, DataStream::DataType::CONNECTED, DataStream::connected{0});
    }
}

void Game::startGame()
{
    this->connectFirstPlayer();
    this->initSystem();
    this->initStartEntity();
    sf::Clock clock;
    sf::Time actualTime = sf::Time::Zero;
    sf::Time timePerFrame = sf::seconds(1.f / 60.f);

    // Set player connection
    std::mutex mutex; 

    std::thread thread(&Game::doUpdates, this, std::ref(mutex));

    thread.join();
}

void Game::initSystem()
{
    // playerInput->init();
    movement->init(coordinator);
    // renderParallax->init(coordinator);
    // renderSprite->init(coordinator);
    collision->init(coordinator);
    bulletHandler->init(coordinator);
    enemyShoot->init(test, coordinator);
    creation->init(coordinator, server);
    sendDataPos->init(coordinator, server);
    getPlayerInput->init(coordinator, server, test, entityCreate);
    entityCreate->init(coordinator, server);
    
}

void Game::doUpdates(std::mutex &mutex)
{
    sf::Clock clock;
    sf::Time actualTime = sf::Time::Zero;
    sf::Time timePerFrame = sf::seconds(1.f / 60.f);

    std::thread getPlayerInputThread = getPlayerInput->runThread(mutex);
    while (game) {
        mutex.lock();
        actualTime += clock.restart();
        while (actualTime > timePerFrame) {
            // coordinator->window.clear();
            this->update(actualTime);
            // coordinator->window.display();
            actualTime -= timePerFrame;
        }
        if (server->getSocketsSize() == 0)
            game = false;
        mutex.unlock();
    }
    getPlayerInputThread.join();
}

void Game::update(sf::Time actualTime)
{
    enemyShoot->update(actualTime);
    sendDataPos->update();
    bulletHandler->update();
    collision->update();
    movement->update();
}
