/*
** EPITECH PROJECT, 2020
** game.cpp
** File description:
** game
*/

#include <random>
#include "Game.hpp"
#include "Entity/EntityCreator.hpp"
#include <dlfcn.h>
#include <iostream>


// extern "C" typedef void (*player)(const std::string &texturePath, sf::Vector2f pos, Coordinator &coordinator);
extern "C" typedef void (*hello_t)( const char* text );

Game::Game(std::shared_ptr<Coordinator> _coordinator, sf::RenderWindow &_window)
: coordinator(_coordinator), window(_window)
{
    game = true;
    test = std::make_shared<EntityArray>("./../build/lib/");

    // coordinator->window.setKeyRepeatEnabled(false);
    coordinator->RegisterComponent<Sprite>();
    coordinator->RegisterComponent<Transform>();
    coordinator->RegisterComponent<Velocity>();
    coordinator->RegisterComponent<Collision>();

    renderSprite = coordinator->RegisterSystem<RenderSprite>();
    renderParallax = coordinator->RegisterSystem<RenderParallax>();
    movement = coordinator->RegisterSystem<Movement>();
    playerInput = coordinator->RegisterSystem<PlayerInput>();
    collision = coordinator->RegisterSystem<Collide>();
    bulletHandler = coordinator->RegisterSystem<BulletHandler>();
    enemyShoot = coordinator->RegisterSystem<Shoot>();

    // //Player
    coordinator->AddSystemTag<RenderSprite>(Tag::PLAYER);
    coordinator->AddSystemTag<Movement>(Tag::PLAYER);
    coordinator->AddSystemTag<PlayerInput>(Tag::PLAYER);
    coordinator->AddSystemTag<Collide>(Tag::PLAYER);

    // //Enemy Bullet
    coordinator->AddSystemTag<RenderSprite>(Tag::ENEMY_BULLET);
    coordinator->AddSystemTag<Movement>(Tag::ENEMY_BULLET);
    coordinator->AddSystemTag<Collide>(Tag::ENEMY_BULLET);
    coordinator->AddSystemTag<BulletHandler>(Tag::ENEMY_BULLET);

    // //Bullet
    coordinator->AddSystemTag<RenderSprite>(Tag::BULLET);
    coordinator->AddSystemTag<Movement>(Tag::BULLET);
    coordinator->AddSystemTag<Collide>(Tag::BULLET);
    coordinator->AddSystemTag<BulletHandler>(Tag::BULLET);

    // //Enemy
    coordinator->AddSystemTag<RenderSprite>(Tag::ENEMY);
    coordinator->AddSystemTag<Collide>(Tag::ENEMY);
    coordinator->AddSystemTag<Movement>(Tag::ENEMY);
    coordinator->AddSystemTag<Shoot>(Tag::ENEMY);

    // //Parallax
    coordinator->AddSystemTag<RenderParallax>(Tag::PARALLAX);
    coordinator->AddSystemTag<Movement>(Tag::PARALLAX);
}

Game::~Game()
{
}

void Game::initStartEntity()
{
    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution(0, 600);
    // EntityArray test("./");

    std::cout << test->entities.size() << std::endl;
    // test->entities["libBackgroundBigPlanet.so"]("../ressources/parallax-space-big-planet.png",
    //     sf::Vector2<float>(1280, distribution(generator)), coordinator);
    // test->entities["libBackgroundFarPlanet.so"]("../ressources/parallax-space-far-planets.png",
    //     sf::Vector2<float>(1280, distribution(generator)), coordinator);
    // test->entities["libBackgroundPlanet.so"]("../ressources/parallax-space-ring-planet.png",
    //     sf::Vector2<float>(1280, distribution(generator)), coordinator);
    // test->entities["libBackgroundSpace.so"]("../ressources/parallax-space-background.png",
    //     sf::Vector2<float>(0, 0), coordinator);
    
    // EntityCreator::createBackgroundSpace("../ressources/parallax-space-background.png", sf::Vector2<float>(0, 0));
    // EntityCreator::createBackgroundFarPlanet("../ressources/parallax-space-far-planets.png", sf::Vector2<float>(1280, distribution(generator)));
    // EntityCreator::createBackgroundStars("../ressources/parallax-space-stars.png", sf::Vector2<float>(1500, distribution(generator)));
    // EntityCreator::createBackgroundStars("../ressources/parallax-space-stars.png", sf::Vector2<float>(1000, distribution(generator)));
    // EntityCreator::createBackgroundBigPlanet("../ressources/parallax-space-big-planet.png", sf::Vector2<float>(500, distribution(generator)));
    // EntityCreator::createBackgroundPlanetRing("../ressources/parallax-space-ring-planet.png", sf::Vector2<float>(1280, distribution(generator)));

}

void Game::startGame()
{
    this->initSystem();
    this->initStartEntity();
    sf::Clock clock;
    sf::Time actualTime = sf::Time::Zero;
    sf::Time timePerFrame = sf::seconds(1.f / 60.f);
    std::cout << "dab" << std::endl;

    while (window.isOpen()) {
        actualTime += clock.restart();
        while (actualTime > timePerFrame) {
            // coordinator->window.clear();
            this->update(actualTime);
            // coordinator->window.display();
            actualTime -= timePerFrame;
            game = false;
        }
    }
}

void Game::initSystem()
{
    // playerInput->init();
    movement->init(coordinator);
    renderParallax->init(coordinator);
    renderSprite->init(coordinator);
    collision->init(coordinator);
    bulletHandler->init(coordinator);
    enemyShoot->init(test, coordinator);
}

void Game::update(sf::Time actualTime)
{
    // playerInput->update(actualTime);
    enemyShoot->update(actualTime);
    bulletHandler->update();
    collision->update();
    movement->update();
    renderParallax->update(window);
    renderSprite->update(window);
}
